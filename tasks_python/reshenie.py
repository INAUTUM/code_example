import speech_recognition as sr
from fuzzywuzzy import fuzz
import os
import time
import datetime
import pyttsx3
r = sr.Recognizer()
m = sr.Microphone(device_index = 0)

def speak(what):
    print(what)
    speak_engine = pyttsx3.init()
    speak_engine.say(what)
    speak_engine.runAndWait()
    speak_engine.stop()


def callback(recognizer, audio):
    voice = recognizer.recognize_google(audio, language="ru-RU").lower()
    if voice.startswith(opt["cmd"]):
                cmd = voice

                for x in opt['cmd']:
                    cmd = cmd.replace(x, "").strip()
opt = {
    'cmd': ('старт', 'стартер', 'стартули', 'стар')
}

with m as source:
    r.adjust_for_ambient_noise(source)

speak('привет, если ты готов начать, то скажи старт')

stop_list = r.listen_in_background(m, callback)
while True: time.sleep(0.1)


