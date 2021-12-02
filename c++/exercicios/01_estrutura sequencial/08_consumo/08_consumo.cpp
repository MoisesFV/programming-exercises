/*
Problema "consumo"
Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais.
*/
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

