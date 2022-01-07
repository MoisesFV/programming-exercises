/*
Problema "negativos"
Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
*/
#include <iostream>

using namespace std;

int main() {
	int numeros, num;
	cout << "Quantos numeros voce vai digitar(ate 10)? ";
	cin >> numeros;
	int vet[10];

	for (int i = 0; i < numeros; i++) {
		cout << "Digite um numero: ";
		cin >> num;
		vet[i] = num;
		
	}
	cout << "NUMEROS NEGATIVOS:\n";
	for (int i = 0; i < numeros; i++) {
		if (vet[i] < 0) {
			cout << vet[i] << "\n";
		}
	}
}