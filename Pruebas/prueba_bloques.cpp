#include <iostream>
using namespace std;

int main()
{

    string matriz[5];
    string cadena = "1234567890";

    string cad1 = cadena.substr(0,3);
    cout << cad1 << endl;
    string cad2 = cadena.substr(3,3);
    cout << cad2 << endl;
    string cad3 = cadena.substr(6,3);
    cout << cad3 << endl;

    /*
    for (int i = 0; i < cadena.length(); i=i+3)
    {
        matriz[i] = cadena.substr(i,3);
        cout <<matriz[i] << endl;
    }
    */

    return 0;
}