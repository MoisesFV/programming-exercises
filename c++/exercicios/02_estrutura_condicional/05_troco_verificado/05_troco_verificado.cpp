/*
Problema "troco_verificado"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante conforme exemplo.
*/
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