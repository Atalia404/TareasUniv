#Elaborar un algoritmo que permita ingresar el número de partidos ganados, perdidos y empatados, por ABC club en el torneo apertura, se debe de mostrar su puntaje total, teniendo en cuenta que por cada partido ganado obtendrá 3 puntos, empatado 1 punto y perdido 0 puntos.

game_won = (int(input("Ingrese el número de partidos GANADOS:")))
game_defeat = (int(input("Ingrese el número de partidos PERDIDOS:")))
game_tied = (int(input("Ingrese el número de partidos EMPATADOS:")))
final_points = (game_won*3)+(game_defeat*1)+(game_tied*0)
print(f"El puntaje final del equipo es: {final_points} puntos.")
