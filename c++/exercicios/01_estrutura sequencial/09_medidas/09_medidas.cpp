/*
Problema "medidas"
Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, areaq, areatri, areatra;
    cout << "Digite a medida A: ";
    cin >> a;
    cout << "\nDigite a medida B: ";
    cin >> b;
    cout << "\nDigite a medida C: ";
    cin >> c;

    areaq = a*a;
    areatri = (a*b) / 2;
    areatra = ((a+b)*c)/2;

    cout << fixed << setprecision(4);
    cout << "\nAREA DO QUADRADO = " << areaq;
    cout << "\nAREA DO TRIANGULO = " << areatri;
    cout << "\nAREA DO TRAPEZIO = " << areatra;


    return 0;
}

