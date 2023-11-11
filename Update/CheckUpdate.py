import requests, os

print(os.getcwd())
os.chdir("ChatBot")

with open("Version\Version.txt", "r") as f:
    old_ver = f.read().strip()

os.chdir("Update")

print('Checking For Updates')
url = 'https://raw.githubusercontent.com/DarkestCodes/ChatBot/main/Version/Version.txt'

# Downloading the file by sending the request to the URL
req = requests.get(url)
 
# Split URL to get the file name
filename = "Version.txt"
 
# Writing the file to the local file system
with open(filename,'wb') as output_file:
    output_file.write(req.content)
with open("Version.txt", "r") as f:
    new_ver = f.read().strip()
if new_ver == old_ver:
    print("You're UpToDate")
    os.remove("Version.txt")
else:
    print('There is a New Update')
    os.remove("Version.txt")
    print("\n\nDo You Want To Update?\n\n")
    ask = input("Y/N: ").lower()
    if ask == "y":
        if os.name == 'nt':
            os.system('''python -u "Update.py"''')
        else:
            os.system('''python3 -u "Update.py"''')
    else:
        print("Update was Canceled")
        input
        exit(0)
