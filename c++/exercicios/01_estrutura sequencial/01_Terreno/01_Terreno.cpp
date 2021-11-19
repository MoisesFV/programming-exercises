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


