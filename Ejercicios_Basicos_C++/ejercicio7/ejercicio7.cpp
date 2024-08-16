#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int cantmaterias;
    double costo = 20, nota, suma, promedio, matricula, desc, total, iva;

    cout << "Ingrese la cantidad de materias cursantes: " << endl;
    cin >> cantmaterias; 

    for (int i = 0; i < cantmaterias; i++)
    {
        do
        {
            cout << "Ingrese la nota de la materia " << (i + 1) << " (entre 0 y 20): ";
            cin >> nota;
        } while (nota < 0 || nota > 20); 
        suma += nota;
    }
        promedio = suma / cantmaterias;
        matricula = cantmaterias * costo;


        if (promedio > 16)
        {
            desc = (matricula * 0.30);
            total = matricula - desc; 
            cout << "Su promedio es de: " << promedio << ", total a pagar es: " << total << " $, con un descuento del 30%, sin IVA." << endl;
        }
        else
        {
            iva = (matricula * 0.15);
            total = matricula + iva;
            cout << "Su promedio es de: " << promedio << ", total a pagar es: " << total << " $ con el 15% del IVA." << endl;
        }
        return 0;
}