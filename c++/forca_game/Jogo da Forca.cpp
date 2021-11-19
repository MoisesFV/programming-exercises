#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
	
	int qtd_letras;
	int i;
	cout << "Bem vindo ao jogo da forca! \n\n\n";
	system("pause");
	cout << "\n\nQuantas letras tera a palavra a ser adivinhada?\n";
	cin >> qtd_letras;
	char letra;
	int vencedor = 0;

	char* char_arr;
	string str_obj;
	string dica;

	cout << "Digite a palavra:\n";
	cin >> str_obj;
	cout << "\nQual a dica?\n";
	cin >> dica;
	char_arr = &str_obj[0];
	char adivinhe[50];

	int erros = 0;
	system("cls");
	cout << "\nA palavra tem " << qtd_letras << " letras.\n";
	cout << "\n\nA dica eh: " << dica << "\n\n";
	for (i = 0; i < qtd_letras; i++) {
		adivinhe[i] = 0;
	}
	cout << "\nDigite uma letra, se voce errar 5 vezes voce perde.\n";
	while(erros < 5) {
		cout << "\n\nDigite a letra:\n";
		cin >> letra;
		int acertos = qtd_letras;
		for (i = 0; i < qtd_letras; i++) {
			if (char_arr[i] == letra) {
				adivinhe[i] = letra;
				vencedor++;

				if (vencedor == qtd_letras) {
					system("cls");
					cout << "\nVoce venceu!\n\n";
					cout << "Palavra: \n\n";
					cout << str_obj;
					cout << "\n";
					return 0;
				}

				}
			else
				acertos--;
		}
		if (acertos == 0) {
			cout << "Letra incorreta, tente novamente\n";
			erros++;
		}
		for (int j = 0; j < qtd_letras; j++) {
			if (adivinhe[j] == 0) {
				cout << " _ ";
			}
			else
				cout << " "<< adivinhe[j] << " ";
		}
	}

	if (erros == 5) {
		cout << "\nVoce perdeu!\n Enforcado!!\n";
	}


		

   
	return 0;
}