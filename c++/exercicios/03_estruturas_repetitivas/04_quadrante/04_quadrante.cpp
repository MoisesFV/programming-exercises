#include <iostream>

using namespace std;
int main()
{
	int x, y;

	cout << "Digite os valores das coordenadas X e Y\n";
	cin >> x >> y;

	while (x!=0 && y!=0) {
		if (x > 0 && y > 0) {
			cout << "QUADRANTE Q1\n";
			cout << "Digite os valores das coordenadas X e Y\n";
			cin >> x >> y;
		}
		else if (x > 0 && y < 0) {
			cout << "QUADRANTE Q4\n";
			cout << "Digite os valores das coordenadas X e Y\n";
			cin >> x >> y;
		}
		else if (x < 0 && y < 0) {
			cout << "QUADRANTE Q3\n";
			cout << "Digite os valores das coordenadas X e Y\n";
			cin >> x >> y;
		}
		else if(x < 0 && y > 0 ){
			cout << "QUADRANTE Q2\n";
			cout << "Digite os valores das coordenadas X e Y\n";
			cin >> x >> y;
		}
	}
	return 0;
}
