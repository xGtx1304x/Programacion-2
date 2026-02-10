#include "Libro.h"
#include "Lista.h"
#include <fstream>

int main() {
	ifstream in("Recursos.csv");
	//Libro libro(101, "El Principito", "Autor", 1992, 1213141516, 215, "Aventura");

	Lista<Recurso> recursos;

	recursos.cargarCSV(in);

	cout << recursos << endl;

	in.close();

	return 0;
}