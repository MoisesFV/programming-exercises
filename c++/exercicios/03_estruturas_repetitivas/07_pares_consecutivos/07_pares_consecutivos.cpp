#include <iostream>

using namespace std;
int main()
{
    int num = 0,soma = 0,incremento = 0;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    while (num != 0) {
        if (num % 2 == 0) {
            soma = soma + num;
            incremento++;
        }
        num++;

        if (incremento == 5) {
            cout << "Soma = " << soma;
            incremento = 0;
            soma = 0;
            cout << "\nDigite um numero inteiro: ";
            cin >> num;
        }
        
    }
    

}
