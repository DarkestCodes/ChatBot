#  //////////////////////
#  // By DarkestCodes //
#  ////////////////////

# Do not change in the codes because the project may get corrupted
  
import requests, zipfile
from io import BytesIO
import os, shutil

print('Update Started')

update = 'https://github.com/DarkestCodes/ChatBot/archive/refs/heads/main.zip'

filename = "Chatbot.zip"

req = requests.get(update)

zipfile= zipfile.ZipFile(BytesIO(req.content))
zipfile.extractall()

shutil.move("ChatBot", "ChatBot.old")
shutil.move("ChatBot-main", "ChatBot")
shutil.rmtree('ChatBot.old')
print('Update Finished')
