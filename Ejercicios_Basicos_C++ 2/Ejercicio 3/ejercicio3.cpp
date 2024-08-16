#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int tipoimpre, copias, desci, totaloffset = 0, totalestandar = 0;

    do 
    {
        cout << "Qué tipo de impresion desea?: " << endl;
        cout << " Escriba 1) para offset o 2) para impresion estandar" << endl;
        cin >> tipoimpre;
        cout << "Cuantas copias desea?" << endl;
        cin >> copias;

            switch (tipoimpre)
            {
                case 1:
                totaloffset = (copias + totaloffset);
                if (copias <= 10000 && totaloffset <= 10000)
                {

                    cout << "Trabajo aceptado, se imprimiran: " << copias << " offset" << endl;
                        break;
                }
                else 
                {
                    cout << "Supera los límites de impresión, trabajo no aceptado" << endl;
                    totaloffset = (totaloffset - copias);
                    break;
                }

                case 2:
                totalestandar = (copias + totalestandar);
                if (copias <= 50000 && totalestandar <= 50000)
                {
                     cout << "Trabajo aceptado, se imprimiran: " << copias << " estandar" << endl;
                        break;
                }
                else
                {
                    cout << "Supera los límites de impresión, trabajo no aceptado" << endl;
                    totalestandar = (totalestandar - copias);
                    break;
                }
            }
            cout << "Número de copias totales: " << endl;
            cout << "Copias offset: " << totaloffset << " / Copias estandar: " << totalestandar << endl;
            cout << "___________________________________________________" << endl;
            cout << " ¿Desea seguir imprimiendo?" << endl;
            cout << " Pulse 1) Para continuar" << endl;
            cout << " Pulse 0) Para salir" << endl;
            cin >> desci;

    } while (desci != 0);
    return 0;
}