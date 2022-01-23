/*
Problema "soma_matrizes"
Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
*/
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int line, column;

    cout << "Quantas linhas tera cada matriz? ";
    cin >> line;
    cout << "\nQuantas colunas tera cada matriz? ";
    cin >> column;

    int** mat1 = new int* [line];
    int** mat2 = new int* [line];
    int** matsoma = new int* [line];

    for (int i = 0; i < column; i++) {
        mat1[i] = new int[column];
        mat2[i] = new int[column];
        matsoma[i] = new int[column];
    }
    cout << "\nDigite os valores da matriz A:";
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            cout << "\nElemento[" << i << "," << j << "]:";
            cin >> mat1[i][j];
        }
    }
    cout << "\nDigite os valores da matriz B:";
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            cout << "\nElemento[" << i << "," << j << "]:";
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            matsoma[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << "\nMATRIZ SOMA:\n";

    for (int i = 0; i < line; i++) {
        cout << "\n";
        for (int j = 0; j < column; j++) {
            cout << matsoma[i][j] << " ";
        }
    }


}

