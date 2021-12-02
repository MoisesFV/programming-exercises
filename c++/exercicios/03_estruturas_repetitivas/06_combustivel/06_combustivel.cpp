/*
Problema "combustivel" (adaptado de URI 1134)
Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combustível.
*/
#include <iostream>

using namespace std;
int main()
{
	int gasolina = 0, alcool = 0, diesel = 0, code = 0;
	while(code != 4){
		cout << "Informe um codigo (1(Alcool), 2(Gasolina), 3(Diesel)) ou 4 para parar: ";
		cin >> code;
		if (code == 1) {
			alcool++;
		}
		else if (code == 2) {
			gasolina++;
		}
		else if (code == 3) {
			diesel++;
		}
	}
	cout << "MUITO OBRIGADO\n";
	cout << "Alcool: " << alcool << "\n";
	cout << "Gasolina: " << gasolina << "\n";
	cout << "Diesel: " << diesel << "\n";

}