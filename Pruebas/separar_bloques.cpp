#include <iostream>
#include <string>
using namespace std;

int NumberOfDigits(int num)
{
    int contador=1;

    while(num/10>0)
    {
        num=num/10;
        contador++;
    }
    return contador;
}

string CompleteCero(int num ,string alfabeto, int k)
{

    string mensaje_num = "";
    int total_number_digits = NumberOfDigits( alfabeto.length() );
    //cout << "cantidad de digitos: " << total_number_digits << endl;
    int contador;

    contador = NumberOfDigits(num);
    string num_alf = to_string(num);

    while ( contador < total_number_digits + k)
    {
        mensaje_num.append("0");
        contador++;
    }  

    mensaje_num.append( num_alf );

    return mensaje_num;
}

string bloques(int indice, string mensaje, int n)
{
    string alfabeto = "abcdefghijklmnopqrstuvwxyz#";
    string mensaje_num;
    int k; 

    n = to_string(n).length();
    k = n-1;

    for (int i = 0; i < mensaje.length(); i++)
    {
        for (int j = 0; j < alfabeto.length(); j++)
        {
            if ( mensaje[i] == alfabeto[j]) //c = 2
            {
                mensaje_num = CompleteCero(j,alfabeto,0);
                // cout << "--------------------------" << endl;
                // cout << "j: " << j << endl;
                // cout << "mensaje_num: " << mensaje_num << endl;
                break;
            }       
        }   
    }

    cout << mensaje_num << endl;
    cout << "---------- ejemplo bueno ----------------" << endl;

    for(int i = 0; i < mensaje_num.length(); i=i+k)
    {
        cout << mensaje_num.substr(i,k) << endl;
    }
    cout << "--------------------------" << endl;

    string matriz[100];
    int inicio = 0;
    for (int i = 0; i < (mensaje_num.length()/k); i++)
    {
        matriz[i] = mensaje_num.substr(inicio,k);
        inicio = inicio + k;
        cout << " incio:" << inicio << endl;
        cout << " k:" << k << endl;
    }

    for (int i = 0; i < (mensaje_num.length()/k); i++)
    {
        cout << matriz[i] << endl;
    }

    string numero = matriz[indice];
    cout << "numero dentro de la funcion: " << numero << endl;

    return numero;
}

int main() {
    cout << "Pruebas" << endl;

    string numero = bloques(1,"comehere#",1003);
    cout << "elemento: " << numero << endl;   

       /*
    for (int i = 0; i < 6; i++)
    {
        cout << bloques(i,"comehere#",1003) << endl;   
    }
    */
   return 0;
}