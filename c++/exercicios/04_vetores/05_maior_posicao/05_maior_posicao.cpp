/*Problema "maior_posicao"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero).
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int valor[10], maior, pos;
    double num;
    maior = 0, pos = 0;
    cout << "Quantos numeros voce vai digitar?(maximo 10) ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        cout << "Digite um numero: ";
        cin >> valor[i];
    }
    for (int i = 0; i < num; i++) {
        if (valor[i] > maior) {
            maior = valor[i];
            pos = i;
        }
    }
    cout << fixed << setprecision(1);
    cout << "MAIOR VALOR = " << maior;
    cout << "\nPOSICAO NO VETOR(Comecando em 0) = " << pos;
}

