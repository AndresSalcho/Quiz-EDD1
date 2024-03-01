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
	bool checkbyID(string);
	virtual void Guardar(string);
};

