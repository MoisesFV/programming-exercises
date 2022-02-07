#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

int main() {
	//variável do tipo time_t para armazenar o tempo em segundos  
	time_t segundos;
	//obtendo o tempo em segundos  
	time(&segundos);

	//para converter de segundos para o tempo local  
	//utilizamos a função localtime  
	tm* Time_now = localtime(&segundos);

	std::cout << "Dia: " << Time_now->tm_mday << "\n";
	std::cout << "Mes: " << Time_now->tm_mon << "\n";
	std::cout << "Ano: " << Time_now->tm_year + 1900 << "\n";

	return 0;
	system("PAUSE");
}