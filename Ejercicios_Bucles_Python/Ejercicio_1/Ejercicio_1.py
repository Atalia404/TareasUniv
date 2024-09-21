#Realice un programa que muestre los primeros 200 numeros pares e impar 
even_number = []
odd_number = []

for i in range (1, 201):
  if i % 2 == 0:
    even_number.append(i)
  else:
    odd_number.append(i)
 
print ("Números pares: ")
print (even_number)
print ("Números impares: ")
print (odd_number)