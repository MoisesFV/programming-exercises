/*
Problema "tabuada"
Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.
*/
#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Deseja a tabuada para qual valor? \n";
    cin >> num;

    for (int i = 0; i <= 10; i++) {
        cout << num<< " x " << i << " = " << i * num << "\n";
    }
}
