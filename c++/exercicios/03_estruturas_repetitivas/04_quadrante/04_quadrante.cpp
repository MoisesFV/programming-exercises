/*
Problema "quadrante" (adaptado de URI 1115)
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O
algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
*/
#include <iostream>

using namespace std;
int main()
{
	int x, y;

	cout << "Digite os valores das coordenadas X e Y\n";
	cin >> x >> y;

	while (x!=0 && y!=0) {
		if (x > 0 && y > 0) {
			cout << "QUADRANTE Q1\n";
			cout << "Digite os valores das coordenadas X e Y\n";
			cin >> x >> y;
		}
		else if (x > 0 && y < 0) {
			cout << "QUADRANTE Q4\n";
			cout << "Digite os valores das coordenadas X e Y\n";
			cin >> x >> y;
		}
		else if (x < 0 && y < 0) {
			cout << "QUADRANTE Q3\n";
			cout << "Digite os valores das coordenadas X e Y\n";
			cin >> x >> y;
		}
		else if(x < 0 && y > 0 ){
			cout << "QUADRANTE Q2\n";
			cout << "Digite os valores das coordenadas X e Y\n";
			cin >> x >> y;
		}
	}
	return 0;
}
