/*
Problema "dados_pessoas"
Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int pessoas, nhomens = 0, nmulheres = 0;
    double alturas[10], maior = 0, menor = 10, mediaalturamulheres = 0;
    char genero[10];
    cout << "Quantas pessoas serao digitadas?(maximo 10) ";
    cin >> pessoas;

    for (int i = 0; i < pessoas; i++) {
        cout << "Altura da " << i + 1 << " pessoa(s)";
        cin >> alturas[i];
        cout << "Genero da " << i + 1 << " pessoa(s)";
        cin >> genero[i];

        if (menor > alturas[i]) {
            menor = alturas[i];
        }
        if (maior < alturas[i]) {
            maior = alturas[i];
        }
        if (genero[i] == 'm' || genero[i] == 'M') {
            nhomens++;
        }
        if (genero[i] == 'f' || genero[i] == 'F') {
            mediaalturamulheres += alturas[i];
            nmulheres++;
        }
    }
    mediaalturamulheres /= nmulheres;
    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menor;
    cout << "\nMaior altura = " << maior;
    cout << "\nMedia das alturas das mulheres = " << mediaalturamulheres;
    cout << fixed << setprecision(0);
    cout << "\nNumero de homens = " << nhomens;
}

