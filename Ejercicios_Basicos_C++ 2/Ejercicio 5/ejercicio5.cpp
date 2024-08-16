#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int num = 100, total = 0;
    do
    {
        cout << " " << num << endl;
        total = total + num;
        num = (num - 2);
        num = num;
    } while (num != 0);

    cout << "La suma total: " << total;
    return 0;
}