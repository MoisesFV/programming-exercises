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
