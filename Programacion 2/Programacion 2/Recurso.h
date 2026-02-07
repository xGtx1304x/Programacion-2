#pragma once

#include <iostream>
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
	Recurso(string titulo, string autor, int anio);

	void setTitulo(string titulo);
	void setAutor(string autor);
	void setAnio(int anio);
	void setDisponible(bool disponible);

	int getId();
	string getTitulo();
	string getAutor();
	int getAnio();
	bool getDisponible();

	virtual friend ostream& operator<<(ostream& os, const Recurso& r) = 0;
	virtual friend ostream& operator>>(istream& is, Recurso& r) = 0;
};

