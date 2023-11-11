import requests
from io import BytesIO
import os

print('Checking For Updates')

#Defining the zip file URL
url = 'https://raw.githubusercontent.com/DarkestCodes/ChatBot/main/Version/version.txt'

# Split URL to get the file name
filename = "nversion.txt"

# Downloading the file by sending the request to the URL
req = requests.get(url)

new_ver = req.content[-1]

os.chdir("..")

with open("Version\\version.txt", "r") as f:
    old_ver = f.read().strip()

if old_ver == new_ver:
    print("You're up-to-date")
else:
    print("\n\nAn Update was found!\n\nDo You Want To Update?\n")
    ask = input("Y/N: ").lower()
    if ask == "y":
        os.chdir("update")
        if os.name == 'nt':
            os.system('''python -u "Update.py"''')
        else:
            os.system('''python3 -u "Update.py"''')
    else:
        print("\n\nUpdate was Canceled!")
