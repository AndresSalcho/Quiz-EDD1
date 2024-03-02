#pragma once
#include "lista.h"
#include <sstream>
#include "Libro.h"

class listaLibros
{
private:
    int cantidadLibros;
public:
    listaLibros();
    ~listaLibros();

    lista<Libro*> ListaL;

    void add(Libro* e);
    void del(Libro* e);
    void update(Libro* old, Libro* nuevo);
    void printAll();
    Libro* getbyID(string);
    bool checkbyID(string);
    bool isEmpty();
    int Size();

    string readBooks(string);

    void serializeList(const string& filename) {
        Libro* aux;
        bool done = false;
        ofstream ofs(filename, ios::binary);
        if (!ofs) {
            throw std::runtime_error("No se pudo abrir el archivo");
        }
        do {
            aux = ListaL.popItem();
            if (aux == NULL) {
                done = true;
            }
            else {
                aux->serialize(ofs);
            }
        } while (!done);
    }

    void deserializeList(const string& filename) {
        ifstream ifs(filename, ios::binary);
        if (!ifs) {
            throw std::runtime_error("No se pudo abrir el archivo");
        }

        while (ifs) {
            Libro* p = new Libro("", "", "", "", "", "");
            p->deserialize(ifs);
            if (ifs) {
                add(p);
            }
        }
    }
};

