#Elaborar un algoritmo que permita calcular el número de micro discos 3.5 necesarios para hacer una copia de seguridad, de la información almacenada en un disco cuya capacidad se conoce. Hay que considerar que el disco duro está lleno de información, además expresado en gigabyte. Un micro disco tiene 1.44 megabyte y un gigabyte es igual a 1,024 megabyte.
gigabyte_disc = float(input("¿Cuantos GB necesita?"))
gigabyte_total = (gigabyte_disc * 1024)/1.44
rounded_num = round (gigabyte_total)
print(f"La cantidad de microdiscos necesarios son {rounded_num} para una capacidad de {gigabyte_disc} GB ")
