import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BOARD)
GPIO.setup(12, GPIO.OUT)
GPIO.setup(16, GPIO.OUT)
GPIO.setup(26, GPIO.OUT)
GPIO.setup(36, GPIO.OUT)

GPIO.output(12, 1)
GPIO.output(16, 1)
GPIO.output(26, 1)
GPIO.output(36, 0)

