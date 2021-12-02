#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Deseja a tabuada para qual valor? \n";
    cin >> num;

    for (int i = 0; i <= 10; i++) {
        cout << num<< " x " << i << " = " << i * num << "\n";
    }
}
