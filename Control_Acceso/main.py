from Login import login
from Registro_Visitas import registro_visitas
from Registro_Datos import registro_datos
from Consultar_Datos import consulta_datos


def opciones():
    while True:
        print("_____________________________")
        print(" >>         𝕄𝔼ℕÚ          <<")
        print("1. Registro de Visitas")
        print("2. Registro de personas")
        print("3. Consulta de datos")
        print("4. Salir")
        print("_____________________________")
        print(" Seleccione una opción: ")
        condition = int(input())
        
        if condition == 1:
            registro_visitas()
        elif condition == 2:
            registro_datos()
        elif condition == 3:
            print("_____________________________")
            print(" >> ℂ𝕆ℕ𝕊𝕌𝕃𝕋𝔸 𝔻𝔼 𝔻𝔸𝕋𝕆𝕊  <<")
            cedula_input = (input("Coloque la cédula a consultar: "))
            resultado = consulta_datos(cedula_input)
            if resultado: 
                print(f"Usuario encontrado {resultado}")
            else:
                print("No se encontro ninguna persona en la base de datos")
        elif condition == 4: 
            break
        else:
            print("Opción incorrecta")    
            opciones()  
  

if login():
    opciones()
    
else:
    login()
    

