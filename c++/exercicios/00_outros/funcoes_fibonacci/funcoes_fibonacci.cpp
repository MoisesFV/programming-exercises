#include <iostream>

int fibonacci(int num);

using namespace std;
int main()
{
    int val;
    cout << "Fibonacci com quantos valores? ";
    cin >> val;
    cout << fibonacci(val);

}

int fibonacci(int num)
{
    if (num == 0)
        return 0;
    else
        if (num == 1)
            return num;
        else
            return fibonacci(num - 1) + fibonacci(num - 2);
}
