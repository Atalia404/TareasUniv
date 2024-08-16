// Hace un programa que imprima el nombre de un articulo, clave, precio original y su precio con descuento. El descuento lo hace en base a la clave, si la clave es 01 el descuento es de 10% y la clave es 02, el descuento es del 20% (Solo existen dos claves).
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float code, product, price, pricet;

    cout << "Ingrese el código del articulo" << endl;
    cin >> code;

    if (code == 01)
    {
        cout << "Cuantas unidades querra de este producto?" << endl;
        cin >> product;
        cout << "Nombre del artículo: Manzana "<< endl;
        cout << "Clave: " << code << endl;
        cout << "Precio original: 5 $" << endl;
        price = (product * 5);
        cout << "Precio total: " << price << " $" << endl;
        pricet = (90 * price) / 100;
        cout << "Precio total con 10% de descuento: " << pricet << " $" << endl;
    }
    else if (code == 02)
    {
        cout << "Cuantas unidades querra de este producto?" << endl;
        cin >> product;
        cout << "Nombre del artículo: Pera " << endl;
        cout << "Clave: " << code << endl;
        cout << "Precio original: 3 $" << endl;
        price = (product * 3);
        cout << "Precio total: " << price << " $" << endl;
        pricet = (80 * price) / 100;
        cout << "Precio total con 20% de descuento: " << pricet << " $" << endl;
    }
    else
    {
        cout << "Código incorrecto" << endl;
    }
    return 0;
 
}