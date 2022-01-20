#include <iostream>
#include "circle.h"

using namespace std;

int main() {
	Circle circulo(2,3,5);

	cout << "\nArea: " << circulo.area();
	cout << "\nDiametro: " << circulo.diameter();
	cout << "\nRaio: " << circulo.getRadius();

	circulo.setRadius(10);

	cout << "\nNova Area: " << circulo.area();
	cout << "\nNovo Diametro: " << circulo.diameter();
	cout << "\nNovo Raio: " << circulo.getRadius();




}