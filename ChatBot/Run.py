#  //////////////////////
#  // By DarkestCodes //
#  ////////////////////

# Do not change in the codes because the project may get corrupted

from time import sleep as sleep
import os

os.chdir("Main\Json")
if (os.name == 'nt'):
    os.system("python main.py")
else:
    os.system("python3 main.py")

if os.path.isfile("Certificate\python.fail"):
    os.chdir("Certificate")
    os.system("pause")
    os.remove("python.fail")
    exit(1)

os.chdir("..")
os.system("g++ Main.cpp -o Main")
if (os.name == 'nt'):
    os.system("start Main.exe")
else:
    os.system(".\Main.exe")
sleep(1.3)
os.chdir("Json\Certificate\Config")
if os.path.isfile("BotName.conf"):
    os.remove("BotName.conf")
os.remove("Name.conf")
os.remove("Change.conf")
