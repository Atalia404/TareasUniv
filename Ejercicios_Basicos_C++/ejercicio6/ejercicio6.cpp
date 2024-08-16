// En un supermercado se hace una promoción, mediante la cual el cliente obtiene un descuento dependiendo de un numero que se escoge al azar. Si el numero escogido es menor a 80, el descuento es de 15% sobre el total de la compra, si es mayor o igual a 80 el descuento es de 20%. Obtener cuanto dinero se descuenta.
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int num, total, totaldesc, desc;

    cout << "Ingrese el número de la promoción" << endl;
    cin >> num;
    cout << " Ingrese el monto total de la compra" << endl;
    cin >> total;

    if (num >= 80)
    {
        desc = (total * 0.20);
        totaldesc = total  - desc;
        cout << "El monto total a pagar con un 20% de descuento es de: " << totaldesc << " $" << endl;
        cout << "Total descontado: " << desc << " $" << endl;
    }
    else  
    {
        desc = (total * 0.10);
        totaldesc = total - desc;
        cout << "El monto total a pagar con un 10% de descuento es de: " << totaldesc << " $" << endl;
        cout << "Total descontado: " << desc << " $" << endl;
    }
    return 0;
}