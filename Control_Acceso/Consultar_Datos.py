import os 
import json

def consulta_datos(cedulah):
    file_path = "Control_Acceso/datos.json"
    if os.path.exists(file_path):
        with open(file_path,"r") as file:
            try:
                data = json.load(file)
            except json.JSONDecodeError:
                print("El archivo Json está vacio.")
                return None
    else: 
        print("El archivo Json no existe. ")
        return None
    
    for persona in data:
        if persona.get("Cedula") == cedulah:
            return persona
        
    print(f"No se encontró la persona con cédula {cedulah}")
    return None


