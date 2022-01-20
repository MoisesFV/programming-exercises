/*
Problema "soma_linhas"
Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
*/

#include <iostream>

using namespace std;
int main()
{
    int line, column;
    cout << "Quantidade de linhas da matriz? ";
    cin >> line;
    cout << "\nQuantidade de colunas da matriz? ";
    cin >> column;


    //linhas
    float** mat = new float* [line];

    //colunas
    for (int i = 0; i < column; i++) {
        mat[i] = new float[column];
    }

    //vetor
    float* vet = new float[line];
    for (int i = 0; i < line; i++) {
        vet[i] = 0;
        cout << "\nDigite os elementos da " << i+1 << "a linha:\n";
        for (int j = 0; j < column; j++) {
            cin >> mat[i][j];
            vet[i] += mat[i][j];
        }
    }
    
    cout << "\nVetor gerado: ";

    for (int i = 0; i < line; i++) {
        cout<< "\n" <<vet[i];
    }

    
}

