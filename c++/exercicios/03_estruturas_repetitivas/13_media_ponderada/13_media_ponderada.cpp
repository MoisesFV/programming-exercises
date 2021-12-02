#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int casos;
	double a, b, c, media;
	cout << "Quantos casos voce vai digitar? ";
	cin >> casos;

	for (int i = 0; i < casos; i++) {
		cout << "Digite tres numeros: \n";
		cin >> a >> b >> c;

		media = (((a * 2) + (b * 3) + (c * 5)) / 10);

		cout << fixed << setprecision(1);
		cout << "MEDIA = " << media << "\n";
	}
}
