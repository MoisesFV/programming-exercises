/*
Problema "baskara"
Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, delta, x_1, x_2;

    cout << "Coeficiente a: ";
    cin >> a;
    cout << "\nCoeficiente b: ";
    cin >> b;
    cout << "\nCoeficiente c: ";
    cin >> c;

    delta = pow(b,2)-4*a*c;
    x_1 = (-b + sqrt(delta)) / (2 * a);
    x_2 = (-b - sqrt(delta)) / (2 * a);

    cout << fixed << setprecision(4);

    if (delta<0) {
        cout << "Nao possui raizes reais";
    }
    else {
        cout << "\nX1 =" << x_1;
        cout << "\nX2 =" << x_2;
    }

}