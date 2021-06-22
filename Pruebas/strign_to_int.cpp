#include <iostream>
using namespace std;

int main()
{
    string cadena = "1";
    int entero = atoi(cadena.c_str());
    cout << "el numero es: " << entero +1 << endl;

    string cadena2 = "05";
    int entero2 = atoi(cadena2.c_str());
    cout << "el numero es: " << entero2+10 << endl;
}