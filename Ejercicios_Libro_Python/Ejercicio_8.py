#Construya un diagrama de flujo tal que, dado como datos la base y la altura de un rectángulo, calcule el perímetro y la superficie de este.
base = float(input("Ingrese la base del rectangulo: "))
height = float(input("Ingrese la altura del rectangulo: "))

area = (base * height)
perimeter = (base + height)*2

print(f"La area es de: {area}")
print(f"El perimetro es de: {perimeter}")
