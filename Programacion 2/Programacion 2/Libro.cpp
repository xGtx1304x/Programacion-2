#include "Libro.h"

Libro::Libro(int id, string titulo, string autor, int anio, int ISBN, int numPaginas, string genero) :
	Recurso(id, titulo, autor, anio), ISBN(ISBN), numPaginas(numPaginas), genero(genero) {
}

void Libro::setISBN(int ISBN) { this->ISBN = ISBN; }
void Libro::setNumPaginas(int numPaginas) { this->numPaginas = numPaginas; }
void Libro::setGenero(string genero) { this->genero = genero; }

int Libro::getISBN() { return ISBN; }
int Libro::getNumPaginas() { return numPaginas; }
string Libro::getGenero() { return genero; }

ostream& operator<<(ostream& os, const Libro& l) {
	os << l.id << ",";
	os << l.titulo << ",";
	os << l.autor << ",";
	os << l.anio << ",";
	os << l.disponible << ",";
	os << l.ISBN << ",";
	os << l.numPaginas << ",";
	os << l.genero;
	return os;
}
istream& operator>>(istream& is, Libro& l) {
    string linea;

    // Leer una línea completa
    if (getline(is, linea)) {
        stringstream ss(linea);
        string tokens[8];

        // Separar por comas
        for (int i = 0; i < 8; i++) {
            getline(ss, tokens[i], ',');
        }

        l.id = stoi(tokens[0]);
        l.titulo = tokens[1];
        l.autor = tokens[2];
        l.anio = stoi(tokens[3]);
        l.disponible = (tokens[4] == "1");
        l.ISBN = stoi(tokens[5]);
        l.numPaginas = stoi(tokens[6]);
        l.genero = tokens[7];
    }

    return is;
}