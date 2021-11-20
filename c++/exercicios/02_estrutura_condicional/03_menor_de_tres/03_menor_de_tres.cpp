#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cout << "Primeiro valor: ";
    cin >> a;
    cout << "\nSegundo valor: ";
    cin >> b;
    cout << "\nTerceiro valor: ";
    cin >> c;

    if (a < b && b << c) {
        cout << "\nMENOR: " << a;
    }
    else if (b < c) {
        cout << "\nMENOR: " << b;
    }else
        cout << "\nMENOR: " << c;
}
