# Construya un diagrama de flujo (DF) que resuelva un problema que tiene una gasolinera. Los dispensadores de esta registran lo que “surten” en galones, pero el precio de la gasolina está fijado en litros. El DF debe calcular e imprimir lo que hay que cobrarle al cliente.

amount_gasoline = (float(input("Cantidad de gasolina dispensada: ")))
price_liter_gasoline = (float(0.50))
liter_gallon = (float(3.785))
total = (amount_gasoline * liter_gallon * price_liter_gasoline)
print(f"El monto a pagar es: {total} $")


