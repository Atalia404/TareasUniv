#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    float kilo, price, desc, suma, total, totaltienda = 0;
    int i;
    cout << "Ingrese el precio del kilo de naranja" << endl;
    cin >> price;
    for (i = 1; i <= 15; i++)
    {
        cout << "Ingrese los kilos de naranja requeridos, cliente: " << i << endl;
        cin >> kilo;

        if (kilo >= 10)
            {
                suma = (kilo * price);
                desc = (suma * 12) / 100;
                total = (suma - desc);
                cout << "El precio a pagar con un 12% de descuento para el cliente " << i << " es: " << total << " $" << endl;
            }
        else 
            {
                total = (kilo * price);
                cout << "El precio a pagar para el cliente: " << i << " es: " << total << " $" << endl;
            }
        totaltienda = total + totaltienda;
    }
    cout << "_______________________________________________________" << endl;
    cout << "El precio total a recibir la tienda por los 15 clientes es: " << totaltienda << " $" << endl;
    
    return 0;
}