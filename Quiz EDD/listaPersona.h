#pragma once
#include "lista.h"
#include "Persona.h"
#include <sstream>
#include <fstream>

class listaPersona
{
public:
    listaPersona();
    ~listaPersona();

    lista<Persona*> ListaP;

    void add(Persona* e);
    void del(Persona* e);
    void update(Persona* old, Persona* nuevo);
    Persona* getbyID(string);
    void printAll(listaLibros ll);
    bool checkbyID(string);

    void serializeList(const string& filename) {
        Persona* aux;
        bool done = false;
        ofstream ofs(filename, ios::binary);
        if (!ofs) {
            throw std::runtime_error("No se pudo abrir el archivo");
        }
        do {
            aux = ListaP.popItem();
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
            Persona* p = new Persona("", "", "", "");
            p->deserialize(ifs);
            if (ifs) {
                add(p);
            }
        }
    }
};

