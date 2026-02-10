#include "GestorRecursos.h"

bool GestorRecursos::guardarRecursos(const string& archivo, Lista<Recurso>& lista) {
	ofstream file(archivo);

	if (!file) return false;

	for (int i = 0; i < lista.getTamano(); i++) {
		Recurso* recurso = lista[i];
		if (recurso) {
			recurso->imprimir(file);
			file << endl;
		}
	}
	file.close();
	return true;
}

Lista<Recurso> GestorRecursos::cargarRecursos(const string& archivo) {
	ifstream file(archivo);
	Lista<Recurso> recursos;
	string linea;

	if (!file) return recursos;

	while (getline(file, linea)) {
		if (linea.empty()) continue;

		stringstream ss(linea);
		string tipo;
		getline(ss, tipo, ',');

		if (tipo == "Libro") {
			Recurso* recurso = new Libro;
			recurso->leer(ss);
			recursos.insertarOrdenado(recurso);
		}

	}
	
	file.close();
	return recursos;
}