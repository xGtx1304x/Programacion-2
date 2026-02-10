#pragma once
#include "Nodo.h"

template <typename T>
class Lista
{
private:
	Nodo<T>* primero;
	int tamano;
public:
	Lista() :
		primero(nullptr), tamano(0) {
	}

	~Lista() {
		limpiar();
	}

	bool vacia() { return !primero; }

	void limpiar() {
		while (primero) {
			Nodo<T>* tmp = primero;
			primero = primero->getSiguiente();
			delete tmp;
		}
		tamano = 0;
	}

	void insertar(T* dato) {
		Nodo<T>* nuevo = new Nodo<T>(dato);

		nuevo->setSiguiente(primero);
		primero = nuevo;
		tamano++;
	}

	void insertarOrdenado(T* dato) {
		Nodo<T>* nuevo = new Nodo<T>(dato);

		if (primero == nullptr || *dato < *primero->getDato()) {
			nuevo->setSiguiente(primero);
			primero = nuevo;
			tamano++;
			return;
		}

		Nodo<T>* actual = primero;
		while (actual->getSiguiente() != nullptr &&
			*actual->getSiguiente()->getDato() < *dato) {
			actual = actual->getSiguiente();
		}

		nuevo->setSiguiente(actual->getSiguiente());
		actual->setSiguiente(nuevo);
		tamano++;
	}

	void push_back(T* dato) {
		Nodo<T>* nuevo = new Nodo<T>(dato);

		if (primero == nullptr) {
			primero = nuevo;
			tamano++;
			return;
		}

		Nodo<T>* actual = primero;
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
		tamano++;
	}

	T* buscar(T* valor) {
		Nodo<T>* p = primero;
		while (p) {
			if (*p->getDato() == *valor) return p->getDato();
			p = p->getSiguiente();
		}
		return nullptr;
	}

	friend ostream& operator<<(ostream& os, const Lista<T>& l) {
		Nodo<T>* p = l.primero;
		while (p) {
			os << *p->getDato() << endl;
			p = p->getSiguiente();
		}
		return os;
	}

	void guardarCSV(ostream& os) {
		Nodo<T>* p = primero;

		while (p) {
			os << *p->getDato() << endl;
			p = p->getSiguiente();
		}
	}

	void cargarCSV(istream& is) {
		limpiar();
		T temp;
		while (is >> temp) {
			push_back(new T(temp));
		}
	}

	T* operator[](int index) {
		if (index < 0 || index >= tamano) {
			return nullptr;
		}

		Nodo<T>* actual = primero;
		for (int i = 0; i < index; i++) {
			actual = actual->getSiguiente();
		}
		return actual->getDato();
	}
};