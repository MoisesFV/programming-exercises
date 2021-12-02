#include <iostream>

using namespace std;
int main()
{
    int num, a;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        cout << "Digite um numero: ";
        cin >> a;
        if (a == 0) {
            cout << "NULO\n";
        }
        else if (a % 2 == 0 && a > 0) {
            cout << "PAR POSITIVO\n";
        }
        else if (a % 2 == 0 && a < 0) {
            cout << "PAR NEGATIVO\n";
        }
        else if (a % 2 != 0 && a > 0) {
            cout << "IMPAR POSITIVO\n";
        }
        else
            cout << "IMPAR NEGATIVO\n";
    }
}
