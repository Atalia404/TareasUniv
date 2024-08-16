#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    float calidad, kilo, talla, total;
    int eggs;
    cout << "Ingrese el peso de la gallina en kilos" << endl;
    cin >> kilo;
    cout << "Ingrese la talla de la gallina en centimetros" << endl;
    cin >> talla;
    cout << " Ingrese el número de huevos que pone la gallina diarios" << endl;
    cin >> eggs;

    calidad = (kilo * talla) / eggs;

    if (calidad >= 15)
    {
        total = (calidad * 1.20);
        cout << "El precio por kilo de huevos para esta gallina es : " << total << " $ " << endl;
    }
    if (calidad <= 8)
    {
        total = (calidad * 0.80);
        cout << "El precio por kilo de huevos para esta gallina es : " << total << " $ " << endl;
    }
    else
        {
            total = (calidad * 1.00);
            cout << "El precio por kilo de huevos para esta gallina es : " << total << " $ " << endl;
        }
        return 0;

}