/*
Problema "crescente" (adaptado de URI 1113)
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.
*/
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
