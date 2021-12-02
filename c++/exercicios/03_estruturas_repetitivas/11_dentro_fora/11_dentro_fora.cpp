#include <iostream>

using namespace std;
int main()
{
    int a, fora, dentro, num;
    fora = 0, dentro = 0;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> a;

    for (int i = 0; i < a; i++) {
        cout << "Digite um numero: ";
        cin >> num;
        if (num >= 10 && num <= 20) {
            dentro++;
        }
        else
            fora++;
    }
    cout << dentro<<" DENTRO\n";
    cout << fora << " FORA\n";
}
