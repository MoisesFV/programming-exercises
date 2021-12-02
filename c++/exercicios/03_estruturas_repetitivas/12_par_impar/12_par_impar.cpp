/*
Problema "par_impar" (adaptado de URI 1074)
Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
apenas NULO.
*/
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
