/*
Problema "glicose"
Fazer um programa para ler a quantidade de glicose
no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose de acordo com a tabela de
referência ao lado.
Classificação Glicose
Normal----Até 100 mg/dl
Elevado---Maior que 100 até 140 mg/dl
Diabetes--Maior de 140 mg/dl
*/
#include <iostream>
#include<iomanip>

using namespace std;
int main()
{
    float glicose;
    string classificacao;

    cout << "Digite a medida da glicose: ";
    cin >> glicose;

    if (glicose <= 100) {
        classificacao = "Normal";
    }else if(glicose > 100 && glicose <= 140) {
        classificacao = "Elevado";
    }else
        classificacao = "Diabetes";
    cout << "\nClassificacao: " << classificacao;
}
