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