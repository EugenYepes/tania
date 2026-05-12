#include <iostream>

using namespace std;

int main() {
	int cantNumeros;
	cout << "ingrese la cantidad de datos a ingresar: ";
	cin >> cantNumeros;

	int vectorNumeros[cantNumeros];

	for (int i = 0; i < cantNumeros; i++) {
		cout << "ingrese el numero " << i + 1 << ": ";
		cin >> vectorNumeros[i];
	}


	for (int i = 0; i < cantNumeros; i++) {
		cout << "el numero " << i + 1 << " es: " << vectorNumeros[i] << endl;
	}
	
	return 0;
}
