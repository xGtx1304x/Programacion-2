#include "GestorRecursos.h"

int main() {
	Libro* libro = new Libro(101, "El Principito", "Autor", 1992, 1213141516, 215, "Aventura");

	Lista<Recurso> recursos;

	recursos.insertarOrdenado(libro);

	cout << GestorRecursos::cargarRecursos("Recursos.csv")[0]->toString() << endl;

	return 0;
}