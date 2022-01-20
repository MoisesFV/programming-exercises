/*
Problema "diagonal_negativos"
Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
*/

#include <iostream>

using namespace std;
int main()
{
	int line, column;


	int negativos = 0;

	cout << "Qual a ordem da matriz? ";
	cin >> line;
	if (line > 10)
		line = 10;

	column = line;

	//declaração, número de linhas
	int **arr = new int* [line];

	//número de colunas
	for (int i = 0; i < column;i++) {
		arr[i] = new int[column];
	}

	for (int i = 0; i < line;i++) {
		for (int j = 0; j < line; j++) {
			cout << "Elemento [" << i << "," << j << "]:";
			cin >> arr[i][j];
			if (arr[i][j] < 0)
				negativos++;
		}
	}
	cout << "Diagonal Principal: ";
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < line; j++) {
			if(i == j)
			cout << " " << arr[i][j];
		}
	}
	cout << "\nQuantidade de negativos = " << negativos;

	

	cout << "\n";
	system("pause");
	
	//deleta
	for (int i = 0; i < line; i++)
		delete[] arr[i];

	delete[] arr;

	return 0;

}
