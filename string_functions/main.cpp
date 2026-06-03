#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int stringToInt(string s);
int potencia(int base, int exponente);
double stringToDouble(string s);
std::vector<string> stringSplit(string s, char split);

int main () {
	// int numero = stringToInt("50025");

	// cout << numero;

	vector<string> result = stringSplit("123.45", '.');

	for (const auto& str : result) {
		cout << str << endl;
	}
}

int stringToInt(string s) {
	int contPotencia = s.size() - 1;
	int numero = 0;
	for (int i = 0; i < s.size(); i++) {
		char letra = s[i];
		numero += (letra - '0') * potencia(10, contPotencia); // numero = numero + algo
		contPotencia--;
	}

	return numero;
}

double stringToDouble(string s) {
	// buscar el . de la string, luego del punto, utilizar potencias negativas. por ejemplo 10 ^ -1 =  0.1.
	// utilizar la funcion pow, porque la funcion q desarrollamos es solo para potencias positivas.
	vector<string> partes = stringSplit(s, '.');
}

std::vector<string> stringSplit(string s, char split) {
	vector<string> result;
	string aux = "";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == split) {
			result.push_back(aux);
			aux = "";
		} else {
			aux += s[i];
		}
	}
	result.push_back(aux);
	return result;
}

int potencia(int base, int exponente) {
	int resultado = 1;
	for (int i = 0; i < exponente; i++) {	
		resultado = resultado * base; // resultado *= base;
	}
	return resultado;
}