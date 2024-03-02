#include "listaLibros.h"

listaLibros::listaLibros() {
}

listaLibros::~listaLibros() {

}

void listaLibros::add(Libro* e) {
	ListaL.agregarFinal(e);
}

void listaLibros::del(Libro* e) {
	ListaL.borrar(e);
}

void listaLibros::update(Libro* old, Libro* nuevo) {
	del(old);
	add(nuevo);
}

Libro* listaLibros::getbyID(string s) {
	lista<Libro*> aux = ListaL;
	bool found = false;

	Libro* temp = new Libro("", "", "", "", "", "");
	while (!found) {
		temp = aux.popItem();
		if (temp == NULL) {
			found = true;
		}
		else if (temp->getid() == s) {
			found = true;
		}
	}
	return temp;
}

bool listaLibros::checkbyID(string s) {
	lista<Libro*> aux = ListaL;
	bool found = false;
	bool res;

	Libro* temp = new Libro("", "", "", "", "", "");
	while (!found) {
		temp = aux.popItem();
		if (temp == NULL) {
			found = true;
			res = false;
		}
		else if (temp->getid() == s) {
			found = true;
			res = true;
		}
	}
	return res;
}
