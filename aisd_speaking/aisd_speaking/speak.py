import io
from gtts import gTTS
from pydub import AudioSegment
from pydub.playback import play
from aisd_msgs.srv import Speak

import rclpy
from rclpy.node import Node

class SpeakService(Node):
    def __init__(self):
        super().__init__('speak_service')
        self.srv = self.create_service(Speak, 'speak', self.speak_callback)

    def speak_callback(self, request, response):
        with io.BytesIO() as f:
            gTTS(text=request.words, lang='en').write_to_fp(f)
            f.seek(0)
            song = AudioSegment.from_file(f, format="mp3")
            play(song)
            response.response = "OK"
            return response

def main(args=None):
    rclpy.init(args=args)
    speak_service = SpeakService()
    try:
        rclpy.spin(speak_service)
    except KeyboardInterrupt: 
        speak_service.get_logger().info(' shutting down.')
    finally:
        speak_service.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
