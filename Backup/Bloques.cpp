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

string bloques(int indice, string mensaje, int n)
{
    string alfabeto = "abcdefghijklmnopqrstuvwxyz#";
    string mensaje_num = "";
    int k; 

    n = to_string(n).length();
    k = n-1;

    int total_number_digits = NumberOfDigits( alfabeto.length() );
    //cout << "cantidad de digitos: " << total_number_digits << endl;

    int contador;

    for (int i = 0; i < mensaje.length(); i++)
    {
        for (int j = 0; j < alfabeto.length(); j++)
        {
            if ( mensaje[i] == alfabeto[j]) //c = 2
            {
                contador = NumberOfDigits(j);
                string num_alf = to_string(j);

                while ( contador < total_number_digits)
                {
                    mensaje_num.append("0");
                    contador++;
                }                

                mensaje_num.append( num_alf );
                // cout << "--------------------------" << endl;
                // cout << "j: " << j << endl;
                // cout << "mensaje_num: " << mensaje_num << endl;
                break;
            }       
        }   
    }

    // cout << "--------------------------" << endl;
    // cout << "Final - Mensaje_num: " << mensaje_num << endl;
    // cout << "--------------------------" << endl;

    /*
    for(int i = 0; i < mensaje_num.length(); i=i+k)
    {
        cout << mensaje_num.substr(i,k) << endl;
    }
    */
    //cout << "--------------------------" << endl;

    string matriz[100];
    for (int i = 0; i < (mensaje_num.length() / k); i++)
    {
        matriz[i] = mensaje_num.substr(i,k);
    }

    for (int i = 0; i < (mensaje_num.length() / k); i++)
    {
        //cout << matriz[i] << endl;
    }

    return matriz[indice];
}

int main() {

    /*
    string alfabeto = "abcdefghijklmnopqrstuvwxyz#";
    string mensaje;
    string mensaje_num = "";
    int n;
    int k;

    mensaje = "comehere#";
    n = 4;
    k = n-1;

    int total_number_digits = NumberOfDigits( alfabeto.length() );
    cout << "cantidad de digitos: " << total_number_digits << endl;

    int contador;

    for (int i = 0; i < mensaje.length(); i++)
    {
        for (int j = 0; j < alfabeto.length(); j++)
        {
            if ( mensaje[i] == alfabeto[j]) //c = 2
            {
                contador = NumberOfDigits(j);
                string num_alf = to_string(j);

                while ( contador < total_number_digits)
                {
                    mensaje_num.append("0");
                    contador++;
                }                

                mensaje_num.append( num_alf );
                cout << "--------------------------" << endl;
                cout << "j: " << j << endl;
                cout << "mensaje_num: " << mensaje_num << endl;
                break;
            }       
        }   
    }
    cout << "--------------------------" << endl;
    cout << "Final - Mensaje_num: " << mensaje_num << endl;
    cout << "--------------------------" << endl;

    for(int i = 0; i < mensaje_num.length(); i=i+k)
    {
        cout << mensaje_num.substr(i,k) << endl;
    }
    cout << "--------------------------" << endl;

    string matriz[100];
    for (int i = 0; i < (mensaje_num.length() / k); i++)
    {
        matriz[i] = mensaje_num.substr(i,k);
    }

    for (int i = 0; i < (mensaje_num.length() / k); i++)
    {
        cout << matriz[i] << endl;
    }
    */

    cout << "Pruebas" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << bloques(i,"comehere#",1003) << endl;   
    }
    
     
}
