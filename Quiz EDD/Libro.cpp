#include "Libro.h"

Libro::Libro(string id, string nom, string aut, string edi, string ani, string pres) {
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

void Libro::setPrestamo(string b) {
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
    if (prestado == "1") {
        return true;
    }
    else {
        return false;
    }

}

string Libro::toString()
{
    string aux = "";

    if (prestado == "1") {
        aux = "Prestado";
    }
    else {
        aux = "Disponible";
    }

    return "Id: " + id + "\nNombre: " + nombre + "\nAutor: " + autor + "\nEditorial: " + editorial + "\nA�o: " + anio + "\nEstado: " + aux + "\n\n";
}