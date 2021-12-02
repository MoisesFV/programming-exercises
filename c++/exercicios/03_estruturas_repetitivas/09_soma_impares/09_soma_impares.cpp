/*
Problema "soma_impares" (adaptado de URI 1071)
Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles.
*/
#include <iostream>

using namespace std;
int main()
{
    int a, b, c, soma;
    soma = 0;
    cout << "Digite dois numeros: \n";
    cin >> a >> b;

    if (a > b) {
        c = a;
        a = b;
        b = c;
    }
    a++;


    for (a; a < b; a++ ) {
        if (a % 2 != 0) {
            soma = soma + a;
        }
    }
    cout << "SOMA DOS IMPARES = " << soma;
}
