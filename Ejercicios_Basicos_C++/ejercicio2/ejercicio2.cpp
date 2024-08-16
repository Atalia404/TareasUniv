//Una persona enferma que pesa 70 kg, se encuentra en reposo, y desea saber cuantas calorias consume su cuerpo durante todo el tiempo que realice una misma actividad. Las actividades que tiene permitido realizar son unicamente dormir o estar sentado en reposo. Los datos que tiene son que estando dormido comune: 1.08 calorias/min y sentado en reposo consume 1.66 calorias/min. 
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float activity, sitting = 1.73, dreaming = 1.25, time, total;
    cout << "Que actividad esta realizando?" << endl;
    cout << "Escriba 1 de estar SENTADO" << endl;
    cout << "Escriba 2 de estar DORMIDO" << endl;
    cin >> activity;

    if (activity == 1)
    {
        cout << "¿Cuantas horas ha estado sentado?" << endl;
        cin >> time;
        total = time * sitting;
        cout<< "Las calorias gastadas al estar sentado son: " << total << " cal/min" << endl;
    }
    else if (activity == 2)
    {
        cout << "¿Cuantas horas ha estado dormido?" << endl;
        cin >> time;
        total = time * dreaming;
        cout << "Las calorias gastadas al estar dormido son: " << total << " cal/min" << endl;
    }
    else
    {
        cout << "Número incorrecto, intente de nuevo" << endl;
    }
    return 0;
}