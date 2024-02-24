#pragma once
#include "lista.h"
#include <sstream>

template <class T>
class listaEN
{
public:
	listaEN();
	~listaEN();

	lista<T*> ListaE;

	void add(T* e);
	void del(T* e);
	void update(T* old, T* nuevo);
	T* getbyID(string);
	bool checkbyID(string);
	string getALL();
};

