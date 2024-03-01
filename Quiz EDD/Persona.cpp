#include "Persona.h"

Persona::Persona(string id, string n, string ap){
	this->Nombre = n;
	this->Apellidos = ap;
	this->Cedula = id;
	this->Libros = NULL;
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
void Persona::setLibros(Libro* l) {
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
Libro* Persona::getLibros() {
	return Libros;
}

string Persona::toString() {
	return "Cedula: " + this->Cedula + " Nombre: " + this->Nombre + " Apellidos: " + this->Apellidos;
}