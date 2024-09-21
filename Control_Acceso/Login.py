def login():
    user1 = "admin"
    pwd1 = "admin"
    print("_________________")
    print("  >> 𝕃𝕆𝔾𝕀ℕ <<   ")
    print("_________________")
    print("Ingrese sus datos")
    print("Usuario: ")
    user = input()
    print("Contraseña: ")
    pwd = input()
    if user == user1 and pwd == pwd1:
        print("_________________________________________________")
        print(">> ʙɪᴇɴᴠᴇɴɪᴅᴏ/ᴀ ᴀʟ ꜱɪꜱᴛᴇᴍᴀ ᴅᴇ ᴄᴏɴᴛʀᴏʟ ᴅᴇ ᴀᴄᴄᴇꜱᴏ <<")
        print("_________________________________________________")
        return True
    else:
        print("Usuario y/o contraseña incorrecta")
        return False