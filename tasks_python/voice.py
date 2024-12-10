import os
import time
import speech_recognition as sr
from fuzzywuzzy import fuzz
import pyttsx3
import datetime
import subprocess
from tkinter import *
from tkinter import ttk

opt = {
    'cmds': ('старт', 'поехали', 'стартули', 'стартер')
}

def speak(what):
    print(what)
    speak_engine = pyttsx3.init()
    speak_engine.say(what)
    speak_engine.runAndWait()
    speak_engine.stop()

def callback(recognizer, audio):
    global f
    try:
        voice = recognizer.recognize_google(audio, language="ru-RU").lower()
        cmd = voice
        print(cmd)
        for i in opt['cmds']:
            if i == cmd:
                print(1)
                f = False
    except:
        pass

r = sr.Recognizer()
m = sr.Microphone(device_index=0)
f = True

while f == True:
    speak('Привет, дорогой пользователь, сейчас я немного расскажу о себе. На данный момент умею выполнять малое количество команд, но я всегда обучаюсь. Мной можно управлять голосом, однако из-за лени моего создателя я долго думаю, со мной можно говорить спустя 2 секунды, как закончу речь.')
    speak('Если вам интересно окунуться в мой мир, то скажите "старт"')
    with m as source:
        audio = r.listen(source)
    callback(r, audio)
if f == False:
    speak('вот и начинается маленькое путешествие')
    root = Tk()

    def Hello(event):
        cmd = 'python proverka.py'
        PIPE = subprocess.PIPE
        p = subprocess.Popen(cmd, shell=True)
        p.wait()
    def iop(event):
        print(2)
    def iop2(event):
        print(3)
    btn = Button(root,  # roditelskoe okno
                 text="XMS_to_XML_Units",  # nadpis na knopke
                 width=30, height=5,  # wirina i visota
                 bg="white", fg="black")  # tsvet fona i nadpisi
    # pri najatii LKM na knopku vizivaetsya funktsiya Hello
    btn.bind("<Button-1>", Hello)
    btn.pack()  # raspolojit knopku na glavnom okne
    btn1 = Button(root,  # roditelskoe okno
                 text="XMS_to_XML_Units",  # nadpis na knopke
                 width=30, height=5,  # wirina i visota
                 bg="white", fg="black")  # tsvet fona i nadpisi
    # pri najatii LKM na knopku vizivaetsya funktsiya Hello
    btn1.bind("<Button-1>", iop)
    btn1.pack()  # raspolojit knopku na glavnom okne
    btn2 = Button(root,  # roditelskoe okno
                 text="XMS_to_XML_Units",  # nadpis na knopke
                 width=30, height=5,  # wirina i visota
                 bg="white", fg="black")  # tsvet fona i nadpisi
    btn2.bind("<Button-1>", iop2)
    btn2.pack()  
    root.mainloop()
