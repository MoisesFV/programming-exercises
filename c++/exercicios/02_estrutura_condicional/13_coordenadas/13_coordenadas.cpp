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

