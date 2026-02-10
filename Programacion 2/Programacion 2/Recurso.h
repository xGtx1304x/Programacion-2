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
    bool disponible;        // 0: Prestado, 1: Disponible
public:
    Recurso(int id = 0, string titulo = "", string autor = "", int anio = 0);

    void setTitulo(string titulo);
    void setAutor(string autor);
    void setAnio(int anio);
    void setDisponible(bool disponible);

    int getId();
    string getTitulo();
    string getAutor();
    int getAnio();
    bool getDisponible();

    bool operator<(Recurso& otro);

    virtual void imprimir(ostream& os) const = 0;
    virtual void leer(istream& is) = 0;

    friend ostream& operator<<(ostream& os, const Recurso& r);
    friend istream& operator>>(istream& is, Recurso& r);
};