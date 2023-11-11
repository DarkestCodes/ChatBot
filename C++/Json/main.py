#//////////////////////
#// By DarkestCodes //
#////////////////////

# *Warning!!!! Please Don't play with the codes or the program may miss behave

import json
import os
import datetime

# Check if updates available
os.chdir("..")
os.chdir("..")
os.chdir("Update")
os.chdir("Config")
with open("update.conf", 'r') as f:
    updates = f.read()
if updates == "True":
    os.chdir("..")
    os.chdir("..")
    os.chdir("..")
    if os.name == 'nt':
        os.system('''python -u "ChatBot\\Update\\Update.py"''')
    else:
        os.system('''python3 -u "ChatBot\\Update\\Update.py"''')
elif updates == "False":
    os.chdir("..")
    os.chdir("..")
    os.chdir("C++")
    os.chdir("Json")
else:
    print("Error in update.conf Value must be a boolean value!")
    with open("python.fail", "w") as f:
        f.write("True")
    exit(0)



# Version, Maxminum Version And UUID
version = 1.0
mversion = 4.1
uuid = "8f25474d-4412-4b3a-a918-74ecfd7ea380"

# 3 is max vaildation for any certificate
date = datetime.datetime.now()
year = date.year
vaildation = 3
vaild = vaildation + year

# Key
key = "thiskey2023"

# Certificate Type
type_cert = "Type_CPP"

# ChatBot change name 4.1 and above versions
change_name = False

def start():
    global cert

    text = open(cert)
    data = json.load(text)

    if data['version'] >= version and data['version'] <= mversion or data['version'] == version:
        if data['version'] <= 4.1 or data['version'] == 4.1:
            if data['ChatBot_Change'] == True:
                if data['ChatBot_Name'] != "fyfuaguwtu4fj":
                    change_name = True
                    if data['uuid'] == uuid:
                        if data['vaild'] <= vaild or data['vaild'] == vaild:
                            if data['key'] == key:
                                if data['Certificate_Type'] == type_cert:
                                    if data['name'] == cert:
                                        os.chdir("Config")
                                        with open("Name.conf", "w") as f:
                                            f.write(data['name'])
                                        with open("BotName.conf", "w") as f:
                                            f.write(data['ChatBot_Name'])
                                        with open("Change.conf", "w") as f:
                                            f.write("true")
                                        os.chdir("..")
                                        os.chdir("..")
                                    else:
                                        print("\n\nError Found In The Certificate: Certificate name does not match with the name value\n\n")
                                        with open("python.fail", "w") as f:
                                            f.write("True")
                                        exit(0)
                                else:
                                    print("\n\nError Found In The Certificate: Certificate Type is not compatible with ChatBot\n\n")
                                    with open("python.fail", "w") as f:
                                        f.write("True")
                                    exit(0)
                            else:
                                print("\n\nError Found In The Certificate: Certificate key is incorrect\n\n")
                                with open("python.fail", "w") as f:
                                    f.write("True")
                                exit(0)
                        else:
                            print("\n\nError Found In The Certificate: Certificate vaildation error the certificate cannot be more than " + str(vaildation) + " years old\n\n")
                            with open("python.fail", "w") as f:
                                f.write("True")
                            exit(0)
                    else:
                        print("\n\nError Found In The Certificate: Certificate uuid is unavailable\n\n")
                        with open("python.fail", "w") as f:
                            f.write("True")
                        exit(0)
                else:
                    pass
            else:
                if data['ChatBot_Change'] == False:
                    if data['uuid'] == uuid:
                        if data['vaild'] <= vaild or data['vaild'] == vaild:
                            if data['key'] == key:
                                if data['Certificate_Type'] == type_cert:
                                    if data['name'] == cert:
                                        os.chdir("Config")
                                        with open("Name.conf", "w") as f:
                                            f.write(data['name'])
                                        with open("Change.conf", "w") as f:
                                            f.write("false")
                                        os.chdir("..")
                                        os.chdir("..")
                                    else:
                                        print("\n\nError Found In The Certificate: Certificate name does not match with the name value\n\n")
                                        with open("python.fail", "w") as f:
                                            f.write("True")
                                        exit(0)
                                else:
                                    print("\n\nError Found In The Certificate: Certificate Type is not compatible with ChatBot\n\n")
                                    with open("python.fail", "w") as f:
                                        f.write("True")
                                    exit(0)
                            else:
                                print("\n\nError Found In The Certificate: Certificate key is incorrect\n\n")
                                with open("python.fail", "w") as f:
                                    f.write("True")
                                exit(0)
                        else:
                            print("\n\nError Found In The Certificate: Certificate vaildation error the certificate cannot be more than " + str(vaildation) + " years old\n\n")
                            with open("python.fail", "w") as f:
                                f.write("True")
                            exit(0)
                    else:
                        print("\n\nError Found In The Certificate: Certificate uuid is unavailable\n\n")
                        with open("python.fail", "w") as f:
                            f.write("True")
                        exit(0)
                else:
                    print("\n\nError Found In The Certificate: Certificate ChatBot_Change can only be assigned with boolean value\n\n")
                    with open("python.fail", "w") as f:
                        f.write("True")
                    exit(0)
        else:
            if data['uuid'] == uuid:
                if data['vaild'] <= vaild or data['vaild'] == vaild:
                    if data['key'] == key:
                        if data['Certificate_Type'] == type_cert:
                            if data['name'] == cert:
                                os.chdir("Config")
                                with open("Name.conf", "w") as f:
                                    f.write(data['name'])
                                with open("Change.conf", "w") as f:
                                    f.write("false")
                                os.chdir("..")
                                os.chdir("..")
                            else:
                                print("\n\nError Found In The Certificate: Certificate name does not match with the name value\n\n")
                                with open("python.fail", "w") as f:
                                    f.write("True")
                                exit(0)
                        else:
                            print("\n\nError Found In The Certificate: Certificate Type is not compatible with ChatBot\n\n")
                            with open("python.fail", "w") as f:
                                f.write("True")
                            exit(0)
                    else:
                        print("\n\nError Found In The Certificate: Certificate key is incorrect\n\n")
                        with open("python.fail", "w") as f:
                            f.write("True")
                        exit(0)
                else:
                    print("\n\nError Found In The Certificate: Certificate vaildation error the certificate cannot be more than " + str(vaildation) + " years old\n\n")
                    with open("python.fail", "w") as f:
                        f.write("True")
                    exit(0)
            else:
                print("\n\nError Found In The Certificate: Certificate uuid is unavailable\n\n")
                with open("python.fail", "w") as f:
                    f.write("True")
                exit(0)
    else:
        print("\n\nError Found In The Certificate: Certificate version is not supported\n\n")
        with open("python.fail", "w") as f:
            f.write("True")
        exit(0)

if os.path.isfile("Certificate\Config\Default.conf"):
    with open("Certificate\Config\Default.conf", "r") as f:
        cert = f.read()
    if cert != "Disabled":
        os.chdir("Certificate")
        if os.path.isfile(cert):
            start()
        else:
            with open("python.fail", "w") as f:
                f.write("True")
            print("Certificate cannot be found!")
            os.chdir("..")
            input
            exit(0)
    else: 
        cert = input("Certificate: ")

        os.chdir("Certificate")

        if os.path.isfile(cert):
            start()
        else:
            with open("python.fail", "w") as f:
                f.write("True")
            print("Certificate cannot be found!")
            os.chdir("..")
            input
            exit(0)
else:
    cert = input("Certificate: ")

    os.chdir("Certificate")

    if os.path.isfile(cert):
        start()
    else:
        with open("python.fail", "w") as f:
            f.write("True")
        print("Certificate cannot be found!")
        os.chdir("..")
        input
        exit(0)
