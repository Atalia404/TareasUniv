inversor1=(float(input("Ingrese la cantidad a invertir de socio 1: ")))
inversor2=(float(input("Ingrese la cantidad a invertir de socio 2: ")))
inversor3=(float(input("Ingrese la cantidad a invertir de socio 3: ")))
total=(inversor1+inversor2+inversor3)
porcen1=(inversor1*100)/total
porcen2=(inversor2*100)/total
porcen3=(inversor3*100)/total
print("=======================================================")
print(f"El porcentaje invertido por el socio 1 es: {porcen1}%")
print(f"El porcentaje invertido por el socio 2 es: {porcen2}%")
print(f"El porcentaje invertido por el socio 3 es: {porcen3}%")
