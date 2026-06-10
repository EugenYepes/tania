#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int stringToInt(string s);
int potencia(int base, int exponente);
double stringToDouble(string s);
std::vector<string> stringSplit(string s, char split);

int main () {
	 double numero = stringToDouble("123.45");

    cout << numero << endl;

    return 0;
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
	
	vector<string> partes = stringSplit(s, '.');
	
	int parteEntera = stringToInt(partes[0]);

    double parteDecimal = 0;

    for (int i = 0; i < partes[1].size(); i++) {
        char letra = partes[1][i];

        parteDecimal += (letra - '0') * pow(10, -(i + 1));
    }

    return parteEntera + parteDecimal;


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