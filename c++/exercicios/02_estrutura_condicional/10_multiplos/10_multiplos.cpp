#include <iostream>

using namespace std;
int main()
{
    int a, b;

    cout << "Digite dois numero inteiros\n";
    cin >> a >> b;

    if ((a > b) && (a % b == 0)) {
        cout << "\nSao multiplos";
    }
    else if ((b > a) && (b % a == 0)){
        cout << "\nSao multiplos";
    }
    else
        cout << "\nNao multiplos";



}
