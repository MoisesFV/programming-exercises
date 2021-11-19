#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double distancia, combustivel, consumo;
	cout << "Distancia percorrida: ";
	cin >> distancia;
	cout << "\nCombustivel gasto";
	cin >> combustivel;
	consumo = distancia / combustivel;

	cout << fixed << setprecision(3);
	cout << "\nConsumo medio = " << consumo;
	return 0;
}

