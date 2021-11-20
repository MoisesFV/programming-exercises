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