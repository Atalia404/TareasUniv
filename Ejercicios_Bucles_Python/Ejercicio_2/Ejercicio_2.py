#Hacer un programa que permita ingresar una palabra y muestre un listado de las vocales de las palabras (Sin repetirlas)

def get_vowels(word):
    vowels = set()

    for letter in word:
        if letter.lower() in 'aeiou':
            vowels.add(letter.lower())

    list_vowels= list(vowels)
    list_vowels.sort()
    print("Vocales de la palabra:", ", ".join(list_vowels))

word_agg = input("Ingresa una palabra: ")

get_vowels(word_agg)