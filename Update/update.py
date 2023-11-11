# importing necessary modules
import requests, zipfile
from io import BytesIO
import os, shutil

print('Update Started')

#Defining the zip file URL
url = 'https://github.com/DarkestCodes/ChatBot/archive/refs/heads/main.zip'

# Split URL to get the file name
filename = "Chatbot.zip"

# Downloading the file by sending the request to the URL
req = requests.get(url)

# extracting the zip file contents
zipfile= zipfile.ZipFile(BytesIO(req.content))
zipfile.extractall('..\\..')

os.chdir("..\\..")
shutil.move("ChatBot", "ChatBot.old")
shutil.move("ChatBot-main", "ChatBot")
shutil.rmtree('ChatBot.old')
print('Update Finished')
