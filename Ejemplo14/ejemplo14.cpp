#include <fstream>
#include <iostream>
using namespace std;

int main() {

	ifstream archivoInput;
	ofstream archivoOutput;
	char c;
	bool  inilinea = true;

	archivoInput.open("input.txt");

	if (!archivoInput.is_open()) {
		cout << "Error al abrir el archivo";
		return 1;
	}

	archivoOutput.open("output.txt");
	if (!archivoOutput.is_open()) {
		archivoInput.close();
		cout << "Error al crear el archivo de salida";
	}

	archivoInput.get(c);
	while (!archivoInput.eof()) {
		
		if (inilinea) {
			if (c != ' ') {
				inilinea = false;
				archivoOutput << c;
			}
		}
		else {
			archivoOutput << c;
		}
		if (c == '\n') {
			inilinea = true;
		}
		c = archivoInput.get();
	}

	archivoInput.close();
	archivoOutput.close();

	cout << "Proceso completado ";
	return 0;
}