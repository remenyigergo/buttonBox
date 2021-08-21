import serial
import pyautogui
Arduino_Serial = serial.Serial('COM3', 115200)

while 1:
    incoming_data = str(Arduino_Serial.readline())
    print(incoming_data)
    if 'pressA' in incoming_data:
        pyautogui.press('a')
    incoming_data = ""