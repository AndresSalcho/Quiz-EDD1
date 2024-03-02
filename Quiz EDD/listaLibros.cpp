#include "listaLibros.h"

listaLibros::listaLibros() {
	cantidadLibros = 0;
}

listaLibros::~listaLibros() {

}

void listaLibros::add(Libro* e) {
	ListaL.agregarFinal(e);
	cantidadLibros++;
}

void listaLibros::del(Libro* e) {
	ListaL.borrar(e);
	cantidadLibros--;
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

void listaLibros::printAll() {
	lista<Libro*> aux = ListaL;
	bool found = false;

	Libro* temp = new Libro("", "", "", "", "", "");

	while (!found) {
		temp = aux.popItem();
		if (temp == NULL) {
			found = true;
		}
		else {
			cout << temp->toString();
		}
	}
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

string listaLibros::readBooks(string b) {

	vector<string> result;
	istringstream iss(b);
	string token;
	Libro* temp;
	int counter = 0;

	while (getline(iss, token, '/')) {

		if (counter != 0) {
			result.push_back(token);
		}else{
			counter++;
		}

	}

	token = "";

	for (const std::string& tk : result) {
		temp = new Libro("", "", "", "", "", "");
		temp = getbyID(tk);

		token = token + "ID: " + temp->getid() + "\nNombre: " + temp->getNombre() + "\n\n";
	}

	return token;
}

bool listaLibros::isEmpty() {

	return ListaL.isEmpty();
}

int listaLibros::Size() {
	return cantidadLibros;
}
