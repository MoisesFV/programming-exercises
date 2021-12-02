/*
Problema "media_ponderada" (adaptado de URI 1079)
Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
pela soma dos pesos.
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int casos;
	double a, b, c, media;
	cout << "Quantos casos voce vai digitar? ";
	cin >> casos;

	for (int i = 0; i < casos; i++) {
		cout << "Digite tres numeros: \n";
		cin >> a >> b >> c;

		media = (((a * 2) + (b * 3) + (c * 5)) / 10);

		cout << fixed << setprecision(1);
		cout << "MEDIA = " << media << "\n";
	}
}
