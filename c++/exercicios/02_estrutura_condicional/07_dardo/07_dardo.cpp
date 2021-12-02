/*
Problema "dardo"
No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float dist1, dist2, dist3;
    cout << "Digite as tres distancias: \n";
    cin >> dist1;
    cin >> dist2;
    cin >> dist3;

    cout << fixed << setprecision(2);
    if(dist1>dist2 && dist2>dist3){
        cout << "Maior distancia = " << dist1;
    }
    else if (dist2 > dist3) {
        cout << "Maior distancia = " << dist2;
    }else
        cout << "Maior distancia = " << dist3;
}
