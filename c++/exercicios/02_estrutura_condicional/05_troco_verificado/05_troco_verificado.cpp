#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float preco, dinheiro, troco;
    int quantidade;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "\nQuantidade comprada: ";
    cin >> quantidade;
    cout << "\nDinheiro recebido: ";
    cin >> dinheiro;

    troco = float(dinheiro - preco * quantidade);
    cout << fixed << setprecision(2);
    if (troco < 0) {
        cout << "Dinheiro insuficiente, faltam " << -troco << " reais";
    }else
    cout << "TROCO = " <<troco;
}