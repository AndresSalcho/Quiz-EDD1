#include "Persona.h"

Persona::Persona(string id, string n, string ap, string l) {
	this->Nombre = n;
	this->Apellidos = ap;
	this->Cedula = id;
	this->Libros = l;
}

Persona::~Persona() {
}

void Persona::setNombre(string n) {
	this->Nombre = n;
}
void Persona::setApellidos(string a) {
	this->Apellidos = a;
}
void Persona::setCedula(string c) {
	this->Cedula = c;
}
void Persona::setLibros(string l) {
	this->Libros = l;
}

string Persona::getNombre() {
	return Nombre;
}
string Persona::getApellidos() {
	return Apellidos;
}
string Persona::getCedula() {
	return Cedula;
}
string Persona::getLibros() {
	return Libros;
}

string Persona::toString(listaLibros ll) {
	return "Cedula: " + this->Cedula + "\nNombre: " + this->Nombre + "\nApellidos: " + this->Apellidos + "\n\nLibros: \n\n" + ll.readBooks(Libros);

}