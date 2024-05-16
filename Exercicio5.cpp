#include <iostream>
#include <locale>

using namespace std;
int main() {

	int numero = 1; // DECLARAÇÃO DA VARIÁVEL


	// 1 A 10

	/*while (numero <= 10) { //CONDIÇAO
		cout << numero;
		numero += 1; //ATUALIZADOR DA CONDIÇÃO
	}
	*/


	/*do {
		cout << numero;
		numero += 1;
	} while (numero <= 10);*/
	

	/*for (int i = 1; i <= 10; i++) {
		cout << i;
	}
    */

	/*int tab1;
	cout << "Informe um número:";
	cin >> tab1;
	for (int j = 1; j <= 10; j++) {
		int resultado = tab1 * j;
		cout << resultado << "\n";
		cout << tab1 << "x" << j << "=" << resultado << "\n";
	}*/
		// Loop de 0 a 50, incrementando de 5 em 5
		/*for (int i = 0; i <= 50; i += 5) {
			std::cout << i << " ";
		}

		return 0;
		*/


	// Loop para ler o número cinco vezes
	/*for (int i = 0; i < 5; ++i) {
		std::cout << "Digite um número: ";
		std::cin >> numero;

		// Verificar se o número é maior que 100
		if (numero > 100) {
			std::cout << "NÚMERO ESPECIAL" << std::endl;
		}
		else {
			std::cout << "NÚMERO COMUM" << std::endl;
		}
	}

	return 0;
	*/


	//DE 0 A 31 PULANDO DE 2 EM 2

	/*
	for (int i = 0; i <= 31; i += 2) {
		std::cout << i << " ";
	}
	*/

	//PROGRAMA QUE LE OS 5 NUMEROS E DIZ SE É POSITIVO OU NEGATIVO

	/*
	int numeros[5];

	// Lendo cinco números
	std::cout << "Digite cinco números:\n";
	for (int i = 0; i < 5; ++i) {
		std::cout << "Número " << i + 1 << ": ";
		std::cin >> numeros[i];
	}

	// Mostrando os números e suas características
	std::cout << "\nOs números digitados foram:\n";
	for (int i = 0; i < 5; ++i) {
		std::cout << numeros[i] << " - ";
		if (numeros[i] > 0) {
			std::cout << "NÚMERO POSITIVO";
		}
		else if (numeros[i] < 0) {
			std::cout << "NÚMERO NEGATIVO";
		}
		else {
			std::cout << "O NÚMERO É ZERO";
		}
		std::cout << std::endl;
	}

	return 0;
	*/


}
