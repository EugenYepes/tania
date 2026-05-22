#include <iostream>
#include <cmath>
using namespace std;

int potencia(int base, int exponente);
int squareRoot(int numero);
double squareRootNewton(double numero);

int main()
{
	int opcion;
	int operando_1;
	int operando_2;
	double resultado;

	do
	{
		cout << "Seleccione una opcion" << endl;
		cout << "1 - sumar" << endl;
		cout << "2 - restar" << endl;
		cout << "3 - multiplar" << endl;
		cout << "4 - dividir" << endl;
		cout << "5 - potencia" << endl;
		cout << "6 - raiz cuadrada" << endl;
		cout << "0 - para salir" << endl;

		cin >> opcion;

		if (opcion != 0)
		{
			cout << "Ingrese 2 números" << endl;
			cin >> operando_1;
			cin >> operando_2;

			switch (opcion)
			{
			case 1:
				resultado = operando_1 + operando_2;
				break;
			case 2:
				resultado = operando_1 - operando_2;
				break;
			case 3:
				resultado = operando_1 * operando_2;
				break;
			case 4:
				resultado = operando_1 / operando_2;
				break;
			case 5: 
				resultado = pow(operando_1, operando_2);
				// resultado = potencia(operando_1, operando_2);
				break;
			case 6:
				resultado = sqrt(operando_1);
				// raiz enesima = pow(operando_1, 1.0 / operando_2);
				// resultado = squareRootNewton(operando_1);
				break;
			default:
				cout << "Opcion no valida" << endl;
				break;
			}

			cout << "El resultado es " << resultado << endl;
		}
	} while (opcion != 0);

	return 0;
}

int potencia(int base, int exponente) {
	int resultado = 1;
	for (int i = 0; i < exponente; i++) {	
		resultado = resultado * base; // resultado *= base;
	}
	return resultado;
}

int squareRoot(int numero) {
	int resultado = 0;
	while (resultado * resultado < numero) {
		resultado++;
	}
	return resultado;
}

double squareRootNewton(double numero) {
	
	double estimacion = numero;
	double presicion = 0.00001;

	while((estimacion * estimacion - numero) > presicion || (numero - estimacion * estimacion) > presicion) {
		estimacion = 0.5 * (estimacion + numero / estimacion);
	}
	return estimacion;
}
