##############
# By Youssef #
# Run.py     #
##############

from time import sleep as sleep
import os

os.chdir("C++\Json")
if (os.name == 'nt'):
    os.system("python main.py")
else:
    os.system("python3 main.py")

if os.path.isfile("Certificate/python.fail"):
    os.chdir("Certificate")
    os.system("pause")
    os.remove("python.fail")

os.chdir("..")
os.system("g++ Main.cpp -o Main -fpermissive")
if (os.name == 'nt'):
    os.system("start Main.exe")
else:
    os.system(".\Main.exe")
sleep(0.8)
os.chdir("Json\Certificate\Config")
if os.path.isfile("BotName.conf"):
    os.remove("BotName.conf")
os.remove("Name.conf")
os.remove("Change.conf")