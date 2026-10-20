#include <iostream>
using namespace std;

int main() {
	char c;
	int cont=0;
	cout << "Introduzca uan linea de texto acabada en Intro ... " << endl;
	cin.get(c);
	while (c != '\n' && c == ' ') {
		cont++;
		cin.get(c);
	}
	while (c != '\n') {
		cout <<c<< endl;
		cin.get(c);
	}
	
	cout << "Hay " << cont << " espacios en blanco";

	return 0;
}