/*
Problema "lanchonete" (adaptado de URI 1038)
Uma lanchonete possui vários produtos. Cada produto possui um código
e um preço. Você deve fazer um programa para ler o código e a
quantidade comprada de um produto (suponha um código válido), e daí
informar qual o valor a ser pago, com duas casas decimais, conforme
tabela de produtos ao lado.
Código do
produto
Preço do
produto
1 R$ 5.00
2 R$ 3.50
3 R$ 4.80
4 R$ 8.90
5 R$ 7.32
*/
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
