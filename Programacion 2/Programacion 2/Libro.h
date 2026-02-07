#pragma once

#include "Recurso.h"

class Libro :
    public Recurso
{
protected:
    int ISBN;
    int numPaginas;
    string genero;
public:
    Libro(int id = 0, string titulo = "", string autor = "", int anio = 0, int ISBN = 0, int numPaginas = 0, string genero = "");

    void setISBN(int ISBN);
    void setNumPaginas(int numPaginas);
    void setGenero(string genero);

    int getISBN();
    int getNumPaginas();
    string getGenero();

    friend ostream& operator<<(ostream& os, const Libro& l);
    friend istream& operator>>(istream& is, Libro& l);
};

