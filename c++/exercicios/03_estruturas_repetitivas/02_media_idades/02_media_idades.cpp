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
