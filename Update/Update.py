import requests, zipfile
from io import BytesIO
from os import system as sys
import os

print('Update Started')
url = 'https://github.com/DarkestCodes/ChatBot/archive/refs/heads/main.zip'

req = requests.get(url)
 
package_name = 'Chatbot.zip'
 
with open(package_name,'wb') as output_file:
    output_file.write(req.content)
req = requests.get(url)

zipfile= zipfile.ZipFile(BytesIO(req.content))
zipfile.extractall('')

if os.name == 'nt':
    sys("del Chatbot.zip")
    os.rename("ChatBot", "ChatBot.old")
    sys("rmdir /S /Q ChatBot.old")
    os.rename("ChatBot-main", "ChatBot")
else:
    sys("rm -r Chatbot.zip")
    os.rename("ChatBot", "ChatBot.old")
    sys("rm -r ChatBot.old")
    os.rename("ChatBot-main", "ChatBot")

print('Update Completed')
