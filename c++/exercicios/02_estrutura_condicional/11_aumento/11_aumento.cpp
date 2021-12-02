/*
Problema "aumento" (adaptado de URI 1048)
Uma empresa vai conceder um aumento percentual de
salário aos seus funcionários dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o salário de uma pessoa, daí mostrar
qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.
Salário atual Aumento
Até R$ 1000.00 20%
Acima de R$ 1000.00
até R$ 3000.00
15%
Acima de R$ 3000.00
até R$ 8000.00
10%
Acima de R$ 8000.00 5%
*/
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

