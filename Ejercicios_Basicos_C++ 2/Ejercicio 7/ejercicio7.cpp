#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int i, time, suma = 0, mayortime = 0, menortime = 0, promedio = 0;
    bool menor, mayor;

    for (i = 1; i <= 10; i++)
    {   cout << "Ingrese el tiempo del recorrido #" << i << endl;
        cin >> time;

        if (time > 16)
        {
            mayortime = 1 + mayortime;
            mayor == true;
        }
        if ( time <= 16 )
        {
            menortime = 1 + menortime;
            menor == true;
        }
        else 
        {
            mayor == false;
            menor == false;
        }
        suma = time + suma;
        promedio = (suma / 10);
    }
        if (mayor == true || menor == true || promedio <= 15)
            {
                cout << "--------" << endl;
                cout << "ES APTO" << endl;
                cout << "--------" << endl;
            }
        else
            {
                cout << "----------" << endl;
                cout << "NO ES APTO" << endl;
                cout << "----------" << endl;
            }
    cout << " El promedio total es de: " << promedio << "min." << endl;
    cout << " Numero de veces que tuvo un tiempo mayor a 16: " << mayortime << endl;
    cout << " Numero de veces que tuvo un tiempo menor a 16: " << menortime << endl;

    return 0;
}