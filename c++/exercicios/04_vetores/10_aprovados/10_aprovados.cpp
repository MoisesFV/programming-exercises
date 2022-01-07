/*
Problema "aprovados"
Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis).
*/
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int alunos;
    double nota1, nota2,media[10];
    string nome[10];
    cout << "Quantos alunos serao digitados?(maximo 10) ";
    cin >> alunos;

    for (int i = 0; i < alunos; i++) {
        cout << "Digite nome, primeira e segunda nota do " << i + 1 << "o aluno:\n";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cin >> nota1;
        cin >> nota2;
        media[i] = (nota1 + nota2) / 2;
    }
    cout << "Alunos aprovados: \n";

    for (int i = 0; i < alunos; i++) {
        if (media[i] >= 6) {
            cout << nome[i] << endl;
        }
    }
}

