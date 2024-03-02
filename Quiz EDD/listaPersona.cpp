#include "listaPersona.h"

listaPersona::listaPersona() {
}

listaPersona::~listaPersona() {

}

void listaPersona::add(Persona* e) {
	ListaP.agregarFinal(e);
}

void listaPersona::del(Persona* e) {
	ListaP.borrar(e);
}

void listaPersona::update(Persona* old, Persona* nuevo) {
	del(old);
	add(nuevo);
}

Persona* listaPersona::getbyID(string s) {
	lista<Persona*> aux = ListaP;
	bool found = false;

	Persona* temp = new Persona("","","");
	while (!found) {
		temp = aux.popItem();
		if (temp == NULL) {
			found = true;
		}
		else if (temp->getCedula() == s) {
			found = true;
		}
	}
	return temp;
}

bool listaPersona::checkbyID(string s) {
	lista<Persona*> aux = ListaP;
	bool found = false;
	bool res;

	Persona* temp = new Persona("","","");
	while (!found) {
		temp = aux.popItem();
		if (temp == NULL) {
			found = true;
			res = false;
		}
		else if (temp->getCedula() == s) {
			found = true;
			res = true;
		}
	}
	return res;
}

void listaPersona::Guardar(string ruta) {
	ofstream out(ruta, ios::out | ios::binary);
	lista<Persona*> aux = ListaP;
	Persona* temp = aux.popItem();
	do {
		out.write((char*)&temp, sizeof(temp));
		Persona* temp = aux.popItem();

	} while (temp == NULL);

	cout << "Guardado con exito";
}

