// Hacer un programa que calcule el total a pagar por la compra de camisas. Si se compran 10 camisas o mas se aplica un descuento del 20% sobre el total de la compra y si son menos de 3 camisas un descuento del 10%
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    double shirt, total, price = 5;
    cout << "Ingrese cuantas camisas comprará: ";
    cin >> shirt;

    if (shirt >= 10)
    {
        total = 80 * (shirt * price) / 100;
        cout << "El total a pagar por la compra de " << shirt << " camisas, con un descuento del 20% es de: " << total << " $" << endl;
    }
    else if (shirt <= 3)
    {
        total = 90* (shirt * price) / 100;
        cout << "El total a pagar por la compra de " << shirt << " camisas, con un descuento del 10% es de: " << total << " $" << endl;
    }
    else
    {   
        total = (shirt * price);
        cout << "El total a pagar por la compra de " << shirt << " camisas, es de: " << total << " $" << endl;
    }
    return 0;
}