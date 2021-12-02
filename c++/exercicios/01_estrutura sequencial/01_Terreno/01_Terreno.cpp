/*
Problema "terreno"
Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais, conforme exemplo.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()


{
    double lar;
    double comp;
    double valor_metro;
    double area;
    double preco;
    
    cout << "Digite a largura do terreno:\n";
    cin >> lar;
    cout << "Digite o comprimento do terreno:\n";
    cin >> comp;
    cout << "Digite o valor do metro quadrado:\n";
    cin >> valor_metro;

    area = lar * comp;
    preco = valor_metro * area;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << "\n";
    cout << "Preco do terreno = " << preco << "\n";

    return 0;
}


