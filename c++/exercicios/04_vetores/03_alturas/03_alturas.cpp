/*
Problema "alturas"
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    string nome[10];
    int idade[10], pessoas;
    double altura[10], media = 0, menores = 0, porcentagem;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> pessoas;
    for (int i = 0; i < pessoas; i++) {
        cout << "\nDados da " << i + 1 << "a pessoa:\n";
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
        media = altura[i] + media;
        if (idade[i]< 16) {
            menores++;
        }

    }
    media = media / pessoas;
    porcentagem = (menores / pessoas) * 100;
    cout << fixed << setprecision(2);
    cout << "\nAltura media: " << media ;
    cout << "\nPessoas com menos de 16 anos: " << porcentagem << "%";
    for (int i = 0; i < pessoas; i++) {
        if (idade[i]<16) {
            cout << "\n"<< nome[i];
        }
    }
}
