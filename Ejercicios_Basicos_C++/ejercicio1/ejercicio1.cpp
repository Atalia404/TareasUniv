// Una fruteria ofrece las manzanas con descuento según la siguiente tabla:
//De 0 – 2 kilos se aplica un 0 % de descuento De 2.01 – 5 kilos se aplica un 10 % de descuento De 5.01 – 10 kilos se aplica un 15 % de descuento 
//De 10.01 en adelante se aplica un 20 % de descuento.
//Imrpimir en pantalla el valor que debe pagar alguien que compra una determinada cantidad de manzanas

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
     double applekg, priceapple = 5.0, total;
     cout << "Ingrese el peso de las manzanas por kg ";
     cin >> applekg;

     if (applekg >= 0.0 && applekg<= 2.0)
     {
          total = applekg * priceapple;
          cout << "Tiene un peso total de manzanas de: " << applekg << "kg, su total a pagar es de: "<< total << endl;

     }
     else if (applekg > 2.0 && applekg<= 5.0)
     {
          total = 90 * (applekg * priceapple) / 100;
          cout << "Tiene un peso total de manzanas de: " << applekg << "kg, con un 10% de descuento, su total a pagar es de: " << total << endl;
     }
     else if (applekg> 5.0 && applekg <= 10.0)
     {
          total = 85 * (applekg * priceapple) / 100;
          cout << "Tiene un peso total de manzanas de: " << applekg << "kg, con un 15% de descuento, su total a pagar es de: " << total << endl;
     }
     else
     {
          total = 80 * (applekg * priceapple) / 100;
          cout << "Tiene un peso total de manzanas de: " << applekg << "kg, con un 20% de descuento, su total a pagar es de: " << total << endl;
     }
     return 0;
}
