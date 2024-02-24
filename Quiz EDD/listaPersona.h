#pragma once
#include "lista.h"
#include <sstream>
#include "Persona.h"

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
	bool checkbyID(string);
};

