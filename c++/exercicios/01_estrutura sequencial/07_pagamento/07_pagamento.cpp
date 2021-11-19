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

