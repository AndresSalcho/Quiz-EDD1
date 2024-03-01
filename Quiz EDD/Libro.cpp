#include "Libro.h"

Libro::Libro(string id, string nom, string aut, string edi, string ani, bool pres) {
    this->nombre = nom;
    this->id = id;
    this->autor = aut;
    this->anio = ani;
    this->editorial = edi;
    this->prestado = pres;
}

Libro::~Libro()
{
}

void Libro::setNombre(string n) {
    this->nombre = n;
}
void Libro::setid(string i) {
    this->id = i;
}
void Libro::setAutor(string a) {
    this->autor = a;
}
void Libro::setEditorial(string e) {
    this->editorial = e;
}
void Libro::setAnio(string a) {
    this->anio = a;
}

void Libro::setPrestamo(bool b) {
    this->prestado = b;
}

string Libro::getNombre() {
    return nombre;
}
string Libro::getAutor() {
    return autor;
}
string Libro::getEditorial() {
    return editorial;
}
string Libro::getid() {
    return id;
}
string Libro::getAnio() {
    return anio;
}
bool Libro::isPrestado() {
    return prestado;
}

string Libro::toString()
{
    string aux = "";

    if (prestado = true) {
        aux = "Prestado";
    }
    else {
        aux = "Disponible";
    }

    return "Id: " + id  + " Nombre: " + nombre + " Autor: " + autor + " Editorial: " + editorial + " Año: " + anio + " Estado: " + aux;
}