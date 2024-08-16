#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    float contami, mascont = 0, mencont = 999, total = 0, promedio;
    int i;

    for (i = 1; i <= 25; i++)
    {
        cout << "Cuantos puntos contaminantes tiene el carro # " << i << " ?:" << endl;
        cin >> contami;

        if (contami > mascont)
            
            {
                mascont = contami;
            }
        if (contami < mencont)
            {
                mencont = contami;
            }

            total = contami + total;
            promedio = (total) / 25;

            cout << "El mayor contaminante tiene: " << mascont << endl;
            cout << "El menor contaminante tiene: " << mencont << endl;
            cout << "El promedio de contaminante: " << promedio << endl;
    }
    return 0;
}