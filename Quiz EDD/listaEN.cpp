#include "listaEN.h"

template <class T>
listaEN<T>::listaEN() {
	lista<T*> listaE;
}

template <class T>
listaEN<T>::~listaEN() {

}

template <class T>
void listaEN<T>::add(T* e) {
	listaE.agregarFinal(e);
}

template <class T>
void listaEN<T>::update(T* old, T* nuevo) {
	del(old);
	add(nuevo);
}

template <class T>
T* listaEN<T>::getbyID(string s) {
	lista<Empleado*> aux = listaE;
	bool found = false;

	Empleado* temp = new Empleado("", "", "", "", "", "", "", "", "", "", "", "", "", "", "");
	while (!found) {
		temp = aux.popItem();
		if (temp == NULL) {
			found = true;
		}
		else if (temp->getId() == s) {
			found = true;
		}
	}
	return temp;
}

template <class T>
bool listaEN<T>::checkbyID(string s) {
	lista<Empleado*> aux = listaE;
	bool found = false;
	bool res;

	Empleado* temp = new Empleado("", "", "", "", "", "", "", "", "", "", "", "", "", "", "");
	while (!found) {
		temp = aux.popItem();
		if (temp == NULL) {
			found = true;
			res = false;
		}
		else if (temp->getId() == s) {
			found = true;
			res = true;
		}
	}
	return res;
}

template <class T>
void listaEN<T>::del(T* e) {
	listaE.borrar(e);
}

template <class T>
string listaEN<T>::getALL() {
	UnidadLogica uni;

	lista<Empleado*> aux = listaE;
	bool found = false;
	double res = 0;

	Empleado* temp = new Empleado("", "", "", "", "", "", "", "", "", "", "", "", "", "", "");
	while (!found) {
		temp = aux.popItem();
		if (temp == NULL) {
			found = true;
		}
		else {
			res += uni.CalculoTotal(temp);
		}
	}

	return to_string(res) + " Colones";

}