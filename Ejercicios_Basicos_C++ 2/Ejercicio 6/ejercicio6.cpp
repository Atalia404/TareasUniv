#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int option, nort = 0, south = 0, centro = 0, total = 0, opcion, suma;

    do 
    {
        cout << " Seleccione cual es su seccion, pulse:" << endl;
        cout << " 1) Seccion Norte" << endl;
        cout << " 2) Seccion Sur" << endl;
        cout << " 3) Seccion Centro" << endl;
        cin >> option;

        switch (option)
        {
            case 1:
                nort++;
                total = 1 + total;
                break;

            case 2:
                south++;
                total = 1 + total;
                break;

            case 3:
                centro++;
                total = 1 + total;
                break;
        }
        cout << "________________________" << endl;
        cout << "Pulse 1) para continuar" << endl;
        cout << "Pulse 2) para salir " << endl;
        cout << "________________________" << endl;
        cin >>  opcion;
    } while (opcion != 2);
    cout << "=========================================" << endl;
    cout << " Total de personas que votaron: " << endl;
    cout << " Seccion Norte: " << nort << " personas" << endl;
    cout << " Seccion Sur: " << south << " personas" << endl;
    cout << " Seccion Centro " << centro << " personas" << endl;
    cout << " Total de personas que asistieron: " << total << endl;
 
    return 0;
}