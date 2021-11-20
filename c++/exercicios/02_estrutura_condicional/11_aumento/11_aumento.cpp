#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double salario, novosalario, aumento, porcentagem;

	cout << "Digite o salario da pessoa: ";
	cin >> salario;

	if (salario <= 1000.0) {
		porcentagem = 0.20;
	}
		else if (salario > 1000.0 && salario <= 3000.0) {
		porcentagem = 0.15;
	}
		else if (salario > 3000.0 && salario <= 8000) {
		porcentagem = 0.10;
	}else
		porcentagem = 0.05;

	novosalario = (salario * porcentagem) + salario;
	aumento = salario * porcentagem;

	cout << "\nNovo salario = R$ " << novosalario;
	cout << "\nAumento = R$ " << aumento;
	cout << "\nPorcentagem = " << porcentagem * 100 << " %";
}

