#!/usr/bin/env python3
import time
import mouse
import keyboard
import win32api, win32con

def click(x,y):
    win32api.SetCursorPos((x,y))
    mouse.click()
    time.sleep(0.1)

while True:
    if keyboard.is_pressed('a'):
        click(738,910) # on 1st Skill
    elif keyboard.is_pressed('s'):
        click(868,910) # on 2nd Skill
    elif keyboard.is_pressed('k'):
        click(998,910) # on 3rd Skill
    elif keyboard.is_pressed('l'):
        click(1128,910) # on 4th Skill
    elif keyboard.is_pressed('ctrl'):
        break
