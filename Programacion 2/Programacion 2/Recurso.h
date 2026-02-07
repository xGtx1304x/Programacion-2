#pragma once

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Recurso
{
protected:
	int id;
	string titulo;
	string autor;
	int anio;
	bool disponible;		// 0: Prestado, 1: Disponible
public:
	Recurso(int id, string titulo, string autor, int anio);

	void setTitulo(string titulo);
	void setAutor(string autor);
	void setAnio(int anio);
	void setDisponible(bool disponible);

	int getId();
	string getTitulo();
	string getAutor();
	int getAnio();
	bool getDisponible();
};

