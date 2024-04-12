#include <iostream>

using namespace std;
int main() {
	/*int numero1 = 300;
	int numero2 = 150;
	double salario = 499.99;
	int soma = numero1 + numero2 + salario;
	cout << soma;*/		

	/*int numero1 = 35;
	int numero2 = 8;
	int mult = numero1 * numero2;
	cout << mult;*/

	/*int numero1 = 27;
	int numero2 = 16;
	int sub = numero1 - numero2;
	cout << sub;*/

	/*int numero1 = 300;
	int numero2 = 20;
	int mult = numero1 * numero2;
	cout << mult;*/

	int camisetas = 120;
	int vendidas = 80;
	int compradas = 50;
	int preco = 30;

	int total_camisetas = camisetas - vendidas + compradas;

	float faturamento = vendidas * preco;

	cout << "Total de camisetas agora: " << total_camisetas;
	cout << "\n";
	cout << "Faturamento total: R$ " << faturamento;

	return 0;
}
