/*
Problema "media_pares"
Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR"
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int elementos, vet[10], pares;
    pares = 0;
    double media = 0;
    cout << "Quantos elementos tera o vetor?(maximo 10) ";
    cin >> elementos;

    for (int i = 0; i < elementos; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
        if (vet[i] % 2 == 0) {
            media += vet[i];
            pares++;
        }
    }
    media /= pares;
    cout << fixed << setprecision(1);
    if (pares > 0) {
        cout << "MEDIA DOS PARES: " << media;
    }
    else
        cout << "NENHUM NUMERO PAR";
}

