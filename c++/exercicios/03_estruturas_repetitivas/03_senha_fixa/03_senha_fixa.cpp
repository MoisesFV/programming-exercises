#include <iostream>

using namespace std;
int main()
{
	int senha = 2312;
	int passwd = 0;

	cout << "Digite a senha:";
	cin >> passwd;

	while (senha != passwd) {
		cout << "\nSenha Invalida! Tente novamente: ";
		cin >> passwd;
	}
	cout << "Acesso permitido!";

}

