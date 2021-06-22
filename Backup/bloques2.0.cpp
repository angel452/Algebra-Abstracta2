string bloques(int indice, string mensaje, int n, string alfabeto)
{
    //string alfabeto = "abcdefghijklmnopqrstuvwxyz#";
    string mensaje_num;

    n = NumberOfDigits(n);

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
                //cout << "--------------------------" << endl;
                //cout << "j: " << j << endl;
                //cout << "mensaje_num: " << mensaje_num << endl;
                break;
            }
        }
    }

    int k;
    k = n-1;
    string matriz[100];
    int inicio = 0;
    for (int i = 0; i < (mensaje_num.length() / k); i++)
    {
        matriz[i] = mensaje_num.substr(inicio,k);
        inicio = inicio + k;
    }

    return matriz[indice];
}
