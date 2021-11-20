#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    string temp;
    double entrada, c, f;

    cout << "Voce vai digitar a temperatura em qual escala (c/f)?";
    cin >> temp;
    cout << fixed << setprecision(2);
    if (temp == "c") {
        cout << "Digite a temperatura em Celsius: ";
        cin >> entrada;
        f = (entrada * (9.0 / 5.0)) + 32.0;
        cout << "\nTemperatura equivalente em Fahrenheit: "<< f;
    }
    else if (temp == "f") {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> entrada;
        c = (entrada - 32.0) * (5.0 / 9.0);
        cout << "\nTemperatura equivalente em Celsius: " << c;
    }
}
