#pragma once
#include <string>
#include "listaLibros.h"


class menu{
public:
	menu();
	~menu();
	void run();
	bool validarNumero(const std::string& hijos);
	bool validarCedula(const std::string& cedula);
	bool validarVacio(const std::string& blanco);
};