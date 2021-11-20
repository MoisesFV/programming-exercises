#include <iostream>

using namespace std;
int main()
{
	int horaini, horafim, duracao;
	cout << "Hora Inicial: ";
	cin >> horaini;
	cout << "Hora Final: ";
	cin >> horafim;

	if (horaini == horafim) {
		duracao = 24;
	}
	else if (horaini < horafim) {
		duracao = horafim - horaini;
	}else
		duracao = (24 - horaini) + horafim;

	cout << "O jogo durou " << duracao << " Hora(s)";
}
