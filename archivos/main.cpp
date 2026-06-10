#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
#include "conversion.h"

using namespace std;

int main() {
	ifstream file("data.csv");
	vector<double> datos;
	string line;

	if (!file.is_open()) {
		cout << "ocurrio un error y no se pudo abrir el archivo" << endl;
		return -1;
	}

	getline(file, line);

	while (getline(file, line, ',')) {
		datos.push_back(stringToDouble(line));
	}

	double sum = 0;

	for (int i = 0; i < datos.size(); i++) {
		sum = sum + datos[i]; // sum += datos[i]
	}

	double promedio = sum / datos.size();

	cout << "El promedio es: " << promedio << endl;

	file.close();

	return 0;
}



