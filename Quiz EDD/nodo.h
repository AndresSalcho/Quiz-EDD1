#pragma once
#include <iostream>

using namespace std;

template <class T> class nodo
{
private:
	T Dato;
	nodo* Siguiente;
public:
	nodo(T dato, nodo*);
	~nodo();
	void setDato(T dato);
	void setSiguiente(nodo* siguiente);
	T getDato();
	nodo* getSiguiente();
};

template <class T>
nodo<T>::nodo(T dato, nodo* next) {
	Dato = dato;
	Siguiente = next;
}

template <class T>
nodo<T>::~nodo() {}

template <class T>
void nodo<T>::setDato(T dato) {
	this->Dato = dato;
}

template <class T>
void nodo<T>::setSiguiente(nodo* siguiente) {
	this->Siguiente = siguiente;
}

template <class T>
T nodo<T>::getDato() {
	return Dato;
}

template <class T>
nodo<T>* nodo<T>::getSiguiente() {
	return Siguiente;
}

