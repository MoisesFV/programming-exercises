#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double preco, dinheiro, troco;
    int qtd;

    cout << "Preço unitario do produto: ";
    cin >> preco;
    cout << "\nQuantidade comprada: ";
    cin >> qtd;
    cout << "\nDinheiro recebido: ";
    cin >> dinheiro;
    troco = dinheiro - (preco * qtd);

    cout << fixed << setprecision(2);
    cout << "\n Troco = " << troco << ".";
    return 0;
}


