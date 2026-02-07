#include "Libro.h"
#include <fstream>

int main() {
	ifstream in("Recursos.csv");
	//Libro libro(101, "El Principito", "Autor", 1992, 1213141516, 215, "Aventura");

	Libro libro;
	in >> libro;

	cout << libro << endl;

	in.close();

	return 0;
}