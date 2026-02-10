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

    virtual void imprimir(ostream& os) const override;
    virtual void leer(istream& is) override;

    virtual string toString() const override;
};

