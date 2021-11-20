#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int codigo, qtd;
    double preco = 0, valor;
    cout << "Codigo do produto: ";
    cin >> codigo;

    switch (codigo) {
    case 1:
        preco = 5.00;
        break;
    case 2:
        preco = 3.50;
        break;
    case 3:
        preco = 4.80;
        break;
    case 4:
        preco = 8.90;
        break;
    case 5:
        preco = 7.32;
        break;
    }

   

    cout << "\nQuantidade comprada: ";
    cin >> qtd;

    cout << fixed << setprecision(2);
    valor = preco * qtd;
    cout << "Valor a pagar: " << valor;
}
