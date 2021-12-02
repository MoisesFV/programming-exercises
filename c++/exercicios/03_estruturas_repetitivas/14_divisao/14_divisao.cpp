#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int casos;
    double denominador, numerador, resultado;
    cout << "Quantos casos voce vai digitar? ";
    cin >> casos;

    for (int i = 0; i < casos;i++) {
        cout << "Entre com o numerador: ";
        cin >> numerador;
        cout << "Entre com o denominador: ";
        cin >> denominador;

        if(denominador == 0){
            cout << "Nao possui resultado nos numeros reais\n";
        }
        else {
            resultado = numerador / denominador;
            cout << fixed << setprecision(2);
            cout << "DIVISAO = " << resultado << "\n";
            
        }
    }

}
