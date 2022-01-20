#include <iostream>

using namespace std;


int fatorial(int fat);
int main()
{
    int num;
    
    cout << "Digite um numero para obter o fatorial: ";
    cin >> num;
    cout << "O resultado eh " << fatorial(num);
}

int fatorial(int fat) {
    if (fat == 0) {
        return 1;
    }
    return fat * fatorial(fat - 1);
}


