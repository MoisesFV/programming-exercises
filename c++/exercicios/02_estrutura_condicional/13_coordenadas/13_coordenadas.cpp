/*
Problema "coordenadas" (adaptado de URI 1041)
Leia os valores das coordenadas X e Y de um ponto no plano
cartesiano. A seguir, determine qual o quadrante ao qual pertence o
ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva
“Eixo X” ou “Eixo Y”, conforme for a situação.
*/
#include <iostream>

using namespace std;
int main()
{
    double x, y;
    cout << "Valor de X: ";
    cin >> x;
    cout << "\nValor de Y: ";
    cin >> y;

    if (x == 0 && y == 0) {
        cout << "Origem";
    }
    else if (x > 0 && y > 0) {
        cout << "Primeiro Quadrante";
    }
    else if (x < 0 && y > 0) {
        cout << "Segundo Quadrante";
    }
    else if (x < 0 && y < 0) {
        cout << "Terceiro Quadrante";
    }
    else if (x == 0) {
        cout << "Eixo Y";
    }
    else if (y == 0) {
        cout << "Eixo X";
    }
    else{
        cout << "Quarto Quadrante";
    }
}

