#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cout << "Digite dois numeros:\n";
    cin >> a >> b;

    while (a != b) {
        if (a > b) {
            cout << "DECRESCENTE";
        }
        else
            cout << "CRESCENTE";
        cout << "\nDigite dois numeros:\n";
        cin >> a >> b;
    }
    cout << "Numeros iguais, programa encerrado\n";
    system("pause");

}
