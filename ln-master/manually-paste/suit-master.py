#!/usr/bin/env python3
import os
from os import system, name
import time
import pyautogui
import pyperclip
import mouse
import keyboard
import win32api, win32con

def clear():
    if name == 'nt':
        _ = system('cls')

    else:
        _ = system('clear')

def click(x,y):
    win32api.SetCursorPos((x,y))
    mouse.click()

def suit(index,items):
    clear()
    for i in range(0,len(items)):
        if index == i:
            print("WAIT. ", end="")
        elif i < index:
            print("DONE. ", end="")
        else:
            print("      ", end="")
        print (items[i])

f = open('items.txt', 'r')
items = []

for x in f:
    newx = x.replace("\n", "")
    items.append(newx)

stop = False
i = 0

suit(i,items)

while i < len(items):
    pyperclip.copy(items[i])

    goback = False
    while True:
        if mouse.is_pressed(button='right'):
            break
        elif keyboard.is_pressed('space') and i > 0:
            goback = True
            break
        elif keyboard.is_pressed('esc'):
            stop = True
            break

    if stop == True:
        break

    if goback == True:
        i -= 1
        suit(i,items)
        continue

    mouse.click()
    time.sleep(0.5)
    click(1009,556) # on Search Button
    time.sleep(0.5)
    click(936,463) # on Text Input
    time.sleep(0.5)

    pyautogui.hotkey("ctrl", "v")
    pyautogui.press('enter')

    win32api.SetCursorPos((1127,118)) # on first item displayed

    suit(i,items)
    time.sleep(0.5)

    i += 1
