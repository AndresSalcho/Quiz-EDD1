#pragma once
#include "lista.h"
#include <sstream>
#include "listaPersona.h"

class listaLibros
{
public:
	listaLibros();
	~listaLibros();

	lista<Libro*> ListaL;

	void add(Libro* e);
	void del(Libro* e);
	void update(Libro* old, Libro* nuevo);
	Libro* getbyID(string);
	bool checkbyID(string);

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
            Libro* p = new Libro("", "", "", "","","");
            p->deserialize(ifs);
            if (ifs) {
                ListaL.agregarFinal(p);
            }
        }
    }
};

