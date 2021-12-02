/*
Problema "idades"
Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name1, name2;
    int idade1, idade2;
    double media;
    cout << "Dados da primeira pessoa:\n";
    cout << "Nome: ";
    cin >> name1;
    cout << "\nIdade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa:\n";
    cout << "Nome: ";
    cin >> name2;
    cout << "\nIdade: ";
    cin >> idade2;

    media = (double(idade1) + double(idade2)) / 2;

    cout << fixed << setprecision(1);

    cout << "A idade media de " << name1 << " e " << name2 << " eh " << media << " anos.";
    return 0;
}
