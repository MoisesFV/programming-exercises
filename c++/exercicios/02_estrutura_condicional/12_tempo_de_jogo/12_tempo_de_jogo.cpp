/*
Problema "tempo_de_jogo" (adaptado de URI 1046)
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
horas.
*/
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
