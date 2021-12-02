/*
Problema "media_idades"
Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{

    int idade, soma, incremento;
    double media;
    bool possible = true;
    idade = 0;
    incremento = 0;
    soma = 0;

    cout << "Calcular a media das idades\n";
    cout << "Digite as idades: \n";

    while (idade > -1) {
        cin >> idade;
        if (idade < 0) {
            break;
        }
        soma = soma + idade;
        incremento++;
    }

    if (incremento == 0) {
        possible = false;
    }

    media = double(soma) / (incremento);

    if (possible == false) {
        cout << "IMPOSSIVEL CALCULAR";
    }
    else {

        cout << fixed << setprecision(2);
        cout << "MEDIA :" << media;
    }
}
