#pragma once
#include "lista.h"
#include <sstream>
#include "listaPersona.h"

class listaLibros
{
public:
	listaLibros();
	~listaLibros();

	lista<Libro*> ListaP;

	void add(Libro* e);
	void del(Libro* e);
	void update(Libro* old, Libro* nuevo);
	Libro* getbyID(string);
	bool checkbyID(string);
};

