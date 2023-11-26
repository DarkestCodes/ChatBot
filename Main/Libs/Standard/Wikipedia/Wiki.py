import requests
import ctypes
import os
import subprocess
from sys import platform
#//////////////////////
#// By DarkestCodes //
#////////////////////

# *Warning!!!! Please Don't play with the codes or the program may miss behave

import wikipedia as wiki

os.chdir("Libs\\Standard\Wikipedia")

def HandelError():
    os.remove("Throw.Error")
    exit(0)
def rewrite():
    os.remove("user.input")
    with open("user.input", 'w') as f:
        f.write("")
    exit(0)

# Get user input from file
with open("user.input", 'r') as f:
    userInput = f.readline()
try:
    information = wiki.summary(userInput)
except:
    with open("Throw.Error", "w") as f:
        f.write("true")
    os.remove("Throw.Error")
    rewrite()
    exit(0)


if platform == "linux" or platform == "linux2":
    subprocess.run(["""/usr/bin/notify-send "{information}" --icon="icon.png" """])


elif platform == "darwin":
    body = information
    title = userInput
    os.system("""osascript -e \'Tell application \"System Events\" to display dialog \""{body}"\" with title \""{title}"\"\'""")

elif platform == "win32":
    ctypes.windll.user32.MessageBoxW(0, information[:5000], userInput, 0)

rewrite()