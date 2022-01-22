/*
Problema "cada_linha"
Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha não haver empates.
*/
#include <iostream>

using namespace std;
int main()
{
    int ordem;
    cout << "Qual a ordem da matriz? ";
    cin >> ordem;

    int** mat = new int* [ordem];

    for (int i = 0; i < ordem; i++)
        mat[i] = new int[ordem];

    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem;j++) {
            cout << "\nElemento [" << i << "," << j << "]:";
            cin >> mat[i][j];
        }
    }


    int *vet = new int[ordem];

    for (int i = 0; i < ordem;i++) {
        vet[i] = 0;
    }

    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            if (mat[i][j] > vet[i])
                vet[i] = mat[i][j];
        }
        
    }

    cout << "\nMAIOR ELEMENTO DE CADA LINHA: ";

    for (int i = 0; i < ordem; i++) {
        cout << vet[i] <<"\n";
    }

}
