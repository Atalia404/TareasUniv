#Se desea calcular la distancia recorrida (m) por un móvil que tiene velocidad constante (m/s) durante un tiempo t (s), considerar que es un MRU (Movimiento Rectilíneo Uniforme).

move = float(input("Ingrese la velocidad que va el automovil: "))
time = int(input("Ingrese el tiempo que tardó en recorrer hasta su destino: "))

distance = (move*time)
print(f"La distancia recorrida por el automóvil es de: {distance} m ")