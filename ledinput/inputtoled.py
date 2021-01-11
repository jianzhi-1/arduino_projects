import serial
import time
arduino = serial.Serial('/dev/cu.usbmodem14101', 9600)
time.sleep(5)
### For the connection to be established, we add the delay
print("Enter 1 to turn on LED and 0 to turn off LED")

while (True):
    data = input()
    ### Must convert the strings to bytes first
    if (data == '1'):
        arduino.write(b'1')
        print("LED is turned ON")
    elif (data == '0'):
        arduino.write(b'0')
        print("LED is turned OFF")
    else:
        print("Quitting")
        quit()
