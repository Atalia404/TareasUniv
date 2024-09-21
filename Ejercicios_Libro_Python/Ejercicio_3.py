#Se necesita elaborar un algoritmo que solicite el número de respuestas correctas, incorrectas y en blanco, correspondientes a postulantes, y muestre su puntaje final considerando que por cada respuesta correcta tendrá 3 puntos, respuestas incorrectas tendrá -1 y respuestas en blanco tendrá 0.
correct_answ = int(input("Ingrese el número de respuestas CORRECTAS: "))
incorrect_answ = int(input("Ingrese el número de respuestas INCORRECTAS : "))
blank_answ = int(input("Ingrese el número  de respuestas en BLANCO : "))
final_answ = (correct_answ * 3)+(incorrect_answ * (-1))+(blank_answ * 0)
print(f"El puntaje final es: {final_answ} puntos")