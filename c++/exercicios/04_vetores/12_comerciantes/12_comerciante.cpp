/*
Problema "comerciante"
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.
*/
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int produtos;
    string nome[10];
    double lucro1 = 0, lucro2 = 0, lucro3 = 0, valortotalc = 0, valortotalv = 0,lucrototal, compra[10], venda[10];
    cout << "Serao digitados quantos produtos?(maximo de 10) ";
    cin >> produtos;

    for (int i = 0; i < produtos; i++) {
        cout << "\nProduto " << i + 1 << ": ";
        cout << "\nNome:";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "\nPreco de compra:";
        cin >> compra[i];
        cout << "\nPreco de Venda:";
        cin >> venda[i];

        valortotalc += compra[i];
        valortotalv += venda[i];

        

        if ((((venda[i] / compra[i]) - 1) * 100) < 10 ) {
            lucro1++;
        }else if ((((venda[i] / compra[i]) - 1) * 100) >= 10 && (((venda[i] / compra[i]) - 1) * 100) <= 20) {
            lucro2++;
        }
        else
            lucro3++;
    }
    lucrototal = valortotalv - valortotalc;

    cout << "\nRELATORIO: ";
    cout << "\nLucro abaixo de 10 % :" << lucro1;
    cout << "\nLucro entre 10 % e 20 % :" << lucro2;
    cout << "\nLucro acima de 20 % :" << lucro3;
    cout << "\nValor total de compra : " << valortotalc;
    cout << "\nValor total de venda : " << valortotalv;
    cout << "\nLucro total : " << lucrototal;
}
