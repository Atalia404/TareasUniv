# Se tiene los puntos A y B en el cuadrante positivo del plano cartesiano, elabore el algoritmo que permita obtener la distancia entre A y B.|
AX = float(input("Ingrese las coordenadas del punto A- AX: "))
AY = float(input("Ingrese las coordenadas del punto A- AY: "))
BX = float(input("Ingrese las coordenadas del punto A- BX: "))
BY = float(input("Ingrese las coordenadas del punto A- BY: "))
distance1 = (AX - BX)**2 
distance2 = (AY - BY)**2 
distance_total = (distance1 + distance2)**0.5
print(f"La distancia entre A y B es: {distance_total}")
