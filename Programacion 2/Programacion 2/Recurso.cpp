#include "Recurso.h"

Recurso::Recurso(int id, string titulo, string autor, int anio) :
	id (id), titulo(titulo), autor(autor), anio(anio), disponible(true) {
}

void Recurso::setTitulo(string titulo) { this->titulo = titulo; }
void Recurso::setAutor(string autor) { this->autor = autor; }
void Recurso::setAnio(int anio) { this->anio = anio; }
void Recurso::setDisponible(bool disponible) { this->disponible = disponible; }

int Recurso::getId() { return id; }
string Recurso::getTitulo() { return titulo; }
string Recurso::getAutor() { return autor; }
int Recurso::getAnio() { return anio; }
bool Recurso::getDisponible() { return disponible; }