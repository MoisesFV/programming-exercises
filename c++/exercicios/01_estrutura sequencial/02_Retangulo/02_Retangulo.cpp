#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double base, altura, area, perimetro, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;
    cout << "\nAltura do retangulo: ";
    cin >> altura;
    cout << fixed << setprecision(4);

    area = base * altura;
    perimetro = (2 * base) + (2 * altura);
    diagonal = sqrt(pow(base,2) + pow(altura,2));

    cout << "\nAREA = " << area;
    cout << "\nPERIMETRO = " << perimetro;
    cout << "\nDIAGONAL = " << diagonal;

    return 0;
}

