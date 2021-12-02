/*
Problema "notas"
Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO", conforme exemplos.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float nota1, nota2, nota_final;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "\nDigite a segunda nota: ";
    cin >> nota2;
    nota_final = (nota1+nota2);

    cout << fixed << setprecision(1);

    cout << "NOTA FINAL = " << nota_final;

    if (nota_final < 60) {
        cout << "\nREPROVADO";
    }
    return 0;
}

