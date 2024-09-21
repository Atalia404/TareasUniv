#Hacer un programa que pida una frase, cuente y muestre la cantidad de vocales que se encuentran en la frase

def vowels_count(phrase):
    phrase = phrase.lower()
    vowels = ['a', 'e', 'i', 'o', 'u']
    counter = 0
    for letter in phrase:
        if letter in vowels:
            counter+= 1

    return counter

sentence = input("Ingresa una frase: ")
numbers_vowels = vowels_count(sentence)
print(f"La cantidad de vocales en la frase es: {numbers_vowels}")