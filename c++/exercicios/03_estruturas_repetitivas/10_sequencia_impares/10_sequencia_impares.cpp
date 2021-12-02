/*
Problema "sequencia_impares" (adaptado de URI 1067)
Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
se for o caso.
*/
#include <iostream>

using namespace std;
int main()
{
    int x, i;
    cout << "Digite o valor de X: ";
    cin >> x;

    for (i = 1; i < x; i++) {
        if (i % 2 != 0) {
            cout << i << "\n";
        }

    }
}
