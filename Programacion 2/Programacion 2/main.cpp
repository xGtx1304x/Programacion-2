#include "GestorRecursos.h"

int main() {
	Recurso* libro1 = new Libro(101, "El Principito", "Autor", 1992, 1213141516, 215, "Aventura");
	Recurso* libro2 = new Libro(101, "Edipo Rey", "Autor", 1992, 1213141516, 215, "Aventura");
	Libro* libro3 = new Libro(101, "Orgullo y Prejuicio", "Autor", 1992, 1213141516, 215, "Aventura");
	Libro* libro4 = new Libro(101, "Thor", "Autor", 1998, 1213141516, 215, "Aventura y accion");

	Lista<Recurso> recursos;

	recursos.insertarOrdenado(libro1);
	recursos.insertarOrdenado(libro2);

	cout << GestorRecursos::cargarRecursos("Recursos.csv")[0]->toString() << endl;

	return 0;
}