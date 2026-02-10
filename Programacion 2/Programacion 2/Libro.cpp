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

void Libro::imprimir(ostream& os) const {
    os << "Libro" << ",";
	os << id << ",";
	os << titulo << ",";
	os << autor << ",";
	os << anio << ",";
	os << disponible << ",";
	os << ISBN << ",";
	os << numPaginas << ",";
	os << genero;
}
void Libro::leer(istream& is) {
    string token;
    string linea;

    if (getline(is, linea)) {
        stringstream ss(linea);

        getline(ss, token, ',');
        id = stoi(token);

        getline(ss, titulo, ',');

        getline(ss, autor, ',');

        getline(ss, token, ',');
        anio = stoi(token);

        getline(ss, token, ',');
        disponible = (token == "1");

        getline(ss, token, ',');
        ISBN = stoi(token);

        getline(ss, token, ',');
        numPaginas = stoi(token);

        getline(ss, genero, ',');
    }
}

string Libro::toString() const {
    stringstream ss;
    ss << "Tipo: Libro" << endl;
    ss << "ID: " << id << endl;
    ss << "Titulo: " << titulo << endl;
    ss << "Autor: " << autor << endl;
    ss << "Anio: " << anio << endl;
    ss << "Disponible: " << (disponible ? "Si" : "No") << endl;
    ss << "ISBN: " << ISBN << endl;
    ss << "Numero de Paginas: " << numPaginas << endl;
    ss << "Genero: " << genero << endl;
    return ss.str();
}