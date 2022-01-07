/*
Problema "abaixo_da_media"
Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int elementos;
    double vet[10], soma, media;
    cout << "Quantos elementos tera o vetor?(maximo 10)  ";
    cin >> elementos;

    soma = 0;
    for (int i = 0; i < elementos; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
        soma += vet[i];
    }
    media = soma / elementos;

    cout << fixed << setprecision(3);
    cout << "Media do vetor: " << media;

    cout << "\nElementos abaixo da media: \n";

    cout << fixed << setprecision(1);
    for (int i = 0; i < elementos; i++) {
        if (vet[i] < media) {
            cout << vet[i] << "\n";
       }
    }
}
