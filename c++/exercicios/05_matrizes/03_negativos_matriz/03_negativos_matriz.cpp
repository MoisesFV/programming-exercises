/*
Problema "negativos_matriz"
Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.
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
    float** mat = new float*[line];
    //colunas
    for (int i = 0; i < column;i++) {
        mat[i] = new float[column];
    }
    for (int i = 0; i < line;i++) {
        for (int j = 0; j < column; j++) {
            cout << "\nElemento [" << i << "][" << j <<"]: ";
            cin >> mat[i][j];
        }
    }
    cout << "\nValores negativos:\n";
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            if(mat[i][j] < 0)
            cout <<  mat[i][j] << "\n";
        }
    }
}

