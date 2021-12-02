/*
Problema "pagamento"
Fazer um programa o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a quantidade
de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com uma
mensagem explicativa, conforme exemplo.
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string name;
    double horas, valorhora, pagamento;

    cout << "Nome: ";
    getline(cin, name);
    cout << "\nValor por hora: ";
    cin >> valorhora;
    cout << "\nHoras trabalhadas: ";
    cin >> horas;

    pagamento = horas * valorhora;
    cout << fixed << setprecision(2);
    cout << "O pagamento para "<< name << " deve ser "<< pagamento;
    return 0;
}

