# Construya un DF tal que, dado como datos el radio y la altura de un cilindro, calcule e imprima el área y su volumen.

height = (float(input("Ingrese la altura: ")))
radio = (float(input("Ingrese el radio: ")))
pi = 3.1416
vol = pi*(radio**2)*(height)
area = (height + radio)*(2*pi*radio)
print(f"Volumen: {vol}")
print(f"Area: {area}")