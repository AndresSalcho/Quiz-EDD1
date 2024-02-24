#include "Persona.h"

Persona::Persona() {
	Nombre = "";
	Apellidos = "";
	Cedula = "";
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
void Persona::setLibros(string *l) {
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
string* Persona::getLibros() {
	return Libros;
}

string Persona::toString() {
	return "Cedula: " + this->Cedula + " Nombre: " + this->Nombre + " Apellidos: " + this->Apellidos;
}