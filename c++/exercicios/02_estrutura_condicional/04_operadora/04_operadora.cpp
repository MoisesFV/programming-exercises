#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int minutos;
	float valordevido;

	cout << "Digite a quantidade de minutos: ";
	cin >> minutos;

	if (minutos > 100) {
		valordevido = 50.0f + ((minutos - 100.0f) * 2.0f);
	}
	else
		valordevido = 50.0;
	cout << fixed << setprecision(2);
	cout << "Valor a pagar: "<< valordevido;
}
