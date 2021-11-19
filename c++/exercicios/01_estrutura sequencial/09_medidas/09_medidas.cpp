#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, areaq, areatri, areatra;
    cout << "Digite a medida A: ";
    cin >> a;
    cout << "\nDigite a medida B: ";
    cin >> b;
    cout << "\nDigite a medida C: ";
    cin >> c;

    areaq = a*a;
    areatri = (a*b) / 2;
    areatra = ((a+b)*c)/2;

    cout << fixed << setprecision(4);
    cout << "\nAREA DO QUADRADO = " << areaq;
    cout << "\nAREA DO TRIANGULO = " << areatri;
    cout << "\nAREA DO TRAPEZIO = " << areatra;


    return 0;
}

