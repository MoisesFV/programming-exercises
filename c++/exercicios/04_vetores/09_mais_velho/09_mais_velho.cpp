/*
Problema "mais_velho"
Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha.
*/
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int pessoas, idades[10], older, testelog;
    string nomes[10];

    older = 0, testelog = 0;
    cout << "Quantas pessoas voce vai digitar?(maximo 10) ";
    cin >> pessoas;

    for (int i = 0; i < pessoas; i++) {
        cout << "Dados da " << i+1 << "a pessoa:";
        cout << "\nNome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        if (idades[i] > older) {
            older = idades[i];
            testelog = i;
        }
    }
    cout << "PESSOA MAIS VELHA: ";
    cout << nomes[testelog];

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
