#include "listaLibros.h"

listaLibros::listaLibros() {
}

listaLibros::~listaLibros() {

}

void listaLibros::add(Libro* e) {
	ListaP.agregarFinal(e);
}

void listaLibros::del(Libro* e) {
	ListaP.borrar(e);
}

void listaLibros::update(Libro* old, Libro* nuevo) {
	del(old);
	add(nuevo);
}

Libro* listaLibros::getbyID(string s) {
	lista<Libro*> aux = ListaP;
	bool found = false;

	Libro* temp = new Libro("","","","","",true);
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
	lista<Libro*> aux = ListaP;
	bool found = false;
	bool res;

	Libro* temp = new Libro("", "", "", "", "", true);
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
