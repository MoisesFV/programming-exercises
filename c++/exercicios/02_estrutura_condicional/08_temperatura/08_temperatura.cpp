/*
Problema "temperatura"
Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com duas casas decimais.
*/
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
