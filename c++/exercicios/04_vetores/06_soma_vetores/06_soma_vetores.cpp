/*
Problema "soma_vetores"
Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado.
*/
#include <iostream>

using namespace std;
int main()
{
    int tamanho, veta[10], vetb[10], vetc[10];
    cout << "Quantos valores terah cada vetor? ";
    cin >> tamanho;

    cout << "Digite os valores de A: \n";

    for (int i = 0; i < tamanho; i++) {
        cin >> veta[i];

    }

    cout << "Digite os valores de B: \n";

    for (int i = 0; i < tamanho; i++) {
        cin >> vetb[i];
    }

    cout << "VETOR RESULTANTE: \n";

    for (int i = 0; i < tamanho; i++) {
         vetc[i] = veta[i] + vetb[i];
         cout << vetc[i] << "\n";
    }

}

