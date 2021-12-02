/*
Problema "fatorial" (adaptado de URI 1153)
Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.
*/
#include <iostream>

using namespace std;
int main()
{
    int i, fat;

    cout << "Digite o valor de N: ";
    cin >> fat;
    i = fat-1;

    for (i;i>0;i--) {
        if (fat == 0) {
            fat = 1;
            break;
        }
        fat = fat * i;
    }
    
    cout << "FATORIAL = " << fat;
}
