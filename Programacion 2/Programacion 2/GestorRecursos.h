#pragma once

#include "Libro.h"
#include "Lista.h"
#include <fstream>
#include <sstream>

class GestorRecursos
{
public:
	static bool guardarRecursos(const string& archivo, Lista<Recurso>& lista);
	static Lista<Recurso> cargarRecursos(const string& archivo);
};

