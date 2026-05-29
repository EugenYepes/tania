#include <iostream>
#include <cmath>

using namespace std;

int stringToInt(string s);
int potencia(int base, int exponente);
double stringToDouble(string s);

int main () {
	int numero = stringToInt("50025");

	cout << numero;
}

int stringToInt(string s) {
	int contPotencia = s.size() - 1;
	int numero = 0;
	for (int i = 0; i < s.size(); i++) {
		char letra = s[i];
		numero += (letra - '0') * potencia(10, contPotencia);
		contPotencia--;
	}

	return numero;
}

double stringToDouble(string s) {
	// buscar el . de la string, luego del punto, utilizar potencias negativas. por ejemplo 10 ^ -1 =  0.1.
	// utilizar la funcion pow, porque la funcion q desarrollamos es solo para potencias positivas.
}

int potencia(int base, int exponente) {
	int resultado = 1;
	for (int i = 0; i < exponente; i++) {	
		resultado = resultado * base; // resultado *= base;
	}
	return resultado;
}