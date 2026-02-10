#pragma once

template <typename T>
class Nodo
{
private:
	T* dato;
	Nodo<T>* siguiente;
public:
	Nodo(T* dato) :
		dato(dato), siguiente(nullptr) {
	}
	~Nodo() = default;

	T* getDato() { return dato; }
	Nodo<T>* getSiguiente() { return siguiente; }

	void setDato(T* dato) { this->dato = dato; }
	void setSiguiente(Nodo<T>* siguiente) { this->siguiente = siguiente; }
};