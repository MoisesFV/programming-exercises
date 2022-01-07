/*
Problema "soma_vetor"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double vet[9];
	int num;
	double numero, soma = 0, media = 0;
	cout << "Quantos numeros voce vai digitar?(no maximo 10) ";
	cin >> num;

	cout << fixed << setprecision(2);
	for (int i = 0; i < num; i++) {
		cout << "Digite um numero: ";
		cin >> numero;
		vet[i] = numero;
	}
	cout << "VALORES:";
	for (int i = 0; i < num; i++) {
		cout << vet[i] << " ";
		soma = soma + vet[i];
	}
	cout << "\nSOMA = " << soma;
	media = soma / num;

	cout << "\nMEDIA = " << media;

}
