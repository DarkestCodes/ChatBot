# importing necessary modules
import requests, zipfile
from io import BytesIO
import os, shutil

print('Downloading started')

#Defining the zip file URL
url = 'https://www.learningcontainer.com/wp-content/uploads/2020/05/sample-zip-file.zip'

# Split URL to get the file name
filename = "Chatbot.zip"

# Downloading the file by sending the request to the URL
req = requests.get(url)

# extracting the zip file contents
zipfile= zipfile.ZipFile(BytesIO(req.content))
zipfile.extractall('..\\..')

os.remove("Chatbot.zip")
os.chdir("..\\..")
shutil.move("ChatBot", "ChatBot.old")
shutil.move("ChatBot-main", "ChatBot")
print('Download Complete')
