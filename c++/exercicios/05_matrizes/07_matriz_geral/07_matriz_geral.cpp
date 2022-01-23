/*
Problema "matriz_geral"
Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.
*/
#include <iostream>

using namespace std;
int main()
{
    int ordem, line, column;
    int soma = 0;
    cout << "Qual a ordem da matriz? ";
    cin >> ordem;

    int** mat = new int* [ordem];

    for (int i = 0; i < ordem; i++) {
        mat[i] = new int[ordem];
    }
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            cout << "\nElemento[" << i << "," << j << "]:";
            cin >> mat[i][j];
            if (mat[i][j] > 0) {
                soma += mat[i][j];
            }
        }
    }
    cout << "\nSOMA DOS POSITIVOS: " << soma;

    cout << "\n\nEscolha uma linha: ";
    cin >> line;
    cout << "Linha escolhida: ";
    for (int j = 0; j < ordem; j++) {
        cout << mat[line][j]<< " ";
    }
    cout << "\n\nEscolha uma coluna: ";
    cin >> column;
    cout << "Coluna escolhida: ";
    for (int i = 0; i < ordem; i++) {
        cout << mat[i][column] << " ";
    }
    cout << "\n\nDiagonal Principal: ";
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            if (i == j) {
                cout << mat[i][j] << " ";
            }
        }
    }
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            if (mat[i][j] < 0) {
                mat[i][j] = mat[i][j] * mat[i][j];
            }
        }
    }
    cout << "\n\nMATRIZ ALTERADA: ";

    for (int i = 0; i < ordem; i++) {
        cout << "\n";
        for (int j = 0; j < ordem; j++) {
            cout << mat[i][j] << " ";
        }
    }

}

