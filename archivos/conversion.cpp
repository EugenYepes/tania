#include "conversion.h"


int stringToInt(string s) {
	int contPotencia = s.size() - 1;
	int numero = 0;
	for (unsigned int i = 0; i < s.size(); i++) {
		char letra = s[i];
		numero += (letra - '0') * potencia(10, contPotencia); // numero = numero + algo
		contPotencia--;
	}

	return numero;
}

double stringToDouble(string s) {
	
	vector<string> partes = stringSplit(s, '.');
	
	int parteEntera = stringToInt(partes[0]);

    double parteDecimal = (double) parteEntera;
	if (partes.size() >= 2) {
		for (int i = 0; i < (int) partes[1].size(); i++) {
			char letra = partes[1][i];
			double pot = pow(10, -(i + 1));
			parteDecimal += (letra - '0') * pot; 
		}
	}

    return parteDecimal;
}

std::vector<string> stringSplit(string s, char split) {
	vector<string> result;
	string aux = "";
	for (unsigned int i = 0; i < s.size(); i++) {
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