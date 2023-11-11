import requests
import os

print('Checking For Updates')

#Defining the zip file URL
url = 'http://github.com/DarkestCodes/ChatBot/blob/main/Version/version.txt'

# Split URL to get the file name
filename = "version.txt"

# Downloading the file by sending the request to the URL
req = requests.get(url)

with open("version.txt", "r") as f:
    new_ver = f.read().strip()

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
            os.system('''python -u "Update\\Update.py"''')
        else:
            os.system('''python3 -u "Update\\Update.py"''')
    else:
        print("\n\nUpdate was Canceled!")