/*
Problema "experiencias" (adaptado de URI 1094)
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto.
*/
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
