
import os 
import json
from datetime import datetime


def registro_visitas():
    print("______________________________")
    print(" >> ℝ𝔼𝔾𝕀𝕊𝕋ℝ𝕆 𝔻𝔼 𝕍𝕀𝕊𝕀𝕋𝔸𝕊 << ")
    print("______________________________")
    cedula = (int(input("Ingrese número de cédula: ")))
    
    num_casa = (int(input("Número de casa que visita: ")))

    file_path = "Control_Acceso/datos.json"

    if os.path.exists(file_path):
        with open(file_path,"r") as file:
            try:
                data = json.load(file)
            except json.JSONDecodeError:
                data = []
    else: 
        data = []
    fecha_hora_actual = datetime.now().strftime("%d-%m-%Y %H:%M:%S")

    for persona in data:
        if persona.get("Cedula") == cedula:
            print(f"Usuario existente en la base de datos con cédula {cedula}")

        visita = {
            "Fecha:": fecha_hora_actual,
            "Casa:": num_casa
        }
        if "visitas" not in persona:
            persona["visitas"] = []

        persona["visitas"].append(visita)

        with open(file_path, "w", encoding="UTF-8") as file: 
            json.dump(data,file, ensure_ascii = False,indent = 4)
        print(">> Visita registrada exitosamente << ")
    print(f"No se encontró usuario con cédula {cedula}, registrar datos") 

    