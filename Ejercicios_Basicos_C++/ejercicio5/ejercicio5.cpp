// Una empresa quiere hacer una compra de varias piezas de la misma clase a una fabrica de refacciones. La empresa dependiendo del monto total de la compra, decidira que hacer para pagar al fabricante asi: 
//Si el monto tal de la compra excede 1500$ la empresa tendra la capacidad de invertir su propio dinero un 55% del monto de la compra, pedir prestado al banco un 30% y el resto lo pagara solicitando un credito al fabricante. 
//Si el monto total de la compra no excede 1500$ la empresa tendra la capacidad de invertir de su propio dinero un 70% y el restante 30% lo pagara solicitando credito al fabricante. 
//El fabricante cobra por concepto de intereses un 20% sobre la cantidad que se le pague a credito. 
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    float piece, price = 500, total, invert, prestbank, creditfab, creditfabtotal;

    cout << "¿Cuantas piezas comprará en la fabrica de refracciones?" << endl;
    cin >> piece;
    total = piece * price;

    if ( total >= 1500)
    {
        invert = (55 * total) / 100;
        prestbank = (30 * total) / 100;
        creditfab = (15 * total) / 100;
        creditfabtotal = (creditfab * 0.20) + creditfab;

        cout << "El monto total a pagar es de: " << total << " $" << endl;
        cout << "Total de inversión de la empresa : " << invert << " $" << endl;
        cout << "Total del prestamo bancario : " << prestbank << " $" << endl;
        cout << "Total de credito solicitado al fabricante mas intereses: " << creditfabtotal << " $" << endl;
    }
    else 
    {
        invert = (70 * total) / 100;
        creditfab = (30 * total) / 100;
        creditfabtotal = (creditfab * 0.20) + creditfab;

        cout << "El monto total a pagar es de: " << total << " $" << endl;
        cout << "Total de inversión de la empresa : " << invert << " $" << endl;
        cout << "Total de credito solicitado al fabricante mas intereses: " << creditfabtotal << " $" << endl;
    }
return 0;
}