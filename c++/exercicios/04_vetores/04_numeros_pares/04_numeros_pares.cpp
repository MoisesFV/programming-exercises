/*
Problema "numeros_pares"
Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares.
*/
#include <iostream>

using namespace std;

int main() {
	int numbers, num[10], par;
	par = 0;
	cout << "Quantos numeros voce vai digitar?(maximo 10) ";
	cin >> numbers;

	for (int i = 0; i < numbers; i++) {
		cout << "Digite um numero: ";
		cin >> num[i];
		if (num[i] % 2 == 0) {
			par++;
		}
	}
	cout << "NUMEROS PARES: \n";
	for (int i = 0; i < numbers; i++) {
		if (num[i] % 2 == 0) {
			cout << num[i] << " ";
		}
	}
	cout << "\nQUANTIDADE DE PARES = " << par;
}
