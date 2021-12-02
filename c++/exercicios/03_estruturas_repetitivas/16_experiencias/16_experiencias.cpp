#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int c, r, s, testes, qtd, i, cobaias;
	c = 0, r = 0, s = 0;
	double pc, pr, ps;
	string tipo;

	cout << "Quantos casos de teste serao digitados? ";
	cin >> testes;

	for (i = 0; i < testes; i++) {
		cout << "Quantidade de cobaias: ";
		cin >> qtd;
		cout << "\nTipo de cobaia: ";
		cin >> tipo;

		if (tipo == "c" || tipo == "C") {
			c = c + qtd;
		}
		else if (tipo == "r" || tipo == "R") {
			r = r + qtd;
		}
		else if (tipo == "s" || tipo == "S") {
			s = s + qtd;
		}
	}

	cobaias = c + r + s;
	pc = double(c) / double(cobaias);
	pr = double(r) / double(cobaias);
	ps = double(s) / double(cobaias);

	cout << "\nRELATORIO FINAL:\n";
	cout << "\nTotal: " << cobaias << " cobaias";
	cout << "\nTotal de coelhos: "<<c;
	cout << "\nTotal de ratos: " << r;
	cout << "\nTotal de sapos: " << s;
	cout << fixed << setprecision(2);
	cout << "\nPorcentagem de coelhos: " << pc * 100;
	cout << "\nPorcentagem de ratos: " << pr * 100;
	cout << "\nPorcentagem de sapos: " << ps * 100;
}
