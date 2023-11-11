import requests, zipfile
from io import BytesIO
import os, shutil

url = 'https://raw.githubusercontent.com/DarkestCodes/ChatBot/main/Version/version.txt'

ver = "version.txt"

requ = requests.get(url)

new_ver = requ.content
os.chdir("..")
with open("Version\\version.txt", 'r') as f:
    old_ver = f.read().strip()

if new_ver != old_ver:
    print('Update Started')

    update = 'https://github.com/DarkestCodes/ChatBot/archive/refs/heads/main.zip'

    filename = "Chatbot.zip"

    req = requests.get(update)

    zipfile= zipfile.ZipFile(BytesIO(req.content))
    zipfile.extractall('..\\..')

    os.chdir("..\\..")
    shutil.move("ChatBot", "ChatBot.old")
    shutil.move("ChatBot-main", "ChatBot")
    shutil.rmtree('ChatBot.old')
    print('Update Finished')
else:
    print("You're Up-To-Date")
    input
