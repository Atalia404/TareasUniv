import os 
import json

def registro_datos():
    print("_______________________________")
    print(" >> ℝ𝔼𝔾𝕀𝕊𝕋ℝ𝕆 𝔻𝔼 ℙ𝔼ℝ𝕊𝕆ℕ𝔸𝕊<< ")
    print("_______________________________")

    print(" Nombre: ")
    name_visit = input()

    print(" Apellido: ")
    lastname_visit = input()

    print("Cédula de identidad: ")
    cedula = input()

    print("Teléfono: ")
    teleph = input() 

    molde_data = {
        "Nombre": name_visit,
        "Apellido": lastname_visit,
        "Cedula": cedula, 
        "Telefono": teleph
        
    } 

    file_path = "Control_Acceso/datos.json"

    if os.path.exists(file_path):
        with open(file_path,"r") as file:
            try:
                data = json.load(file)
            except json.JSONDecodeError:
                data = []
    else: 
        data = []

    for persona in data:
        if persona.get("Cedula") == cedula:
            print(f"Usuario existente en la base de datos con cédula {cedula}")
            return 
        
    data.append(molde_data)

    with open(file_path, "w", encoding="UTF-8") as file: 
        json.dump(data,file, ensure_ascii = False,indent = 4)
    print(">> Datos registrados exitosamente << ")


