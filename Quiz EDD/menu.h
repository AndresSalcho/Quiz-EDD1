#pragma once
#include <string>

class menu{
public:
	menu();
	~menu();
	void run();
	bool validarNumero(const std::string& hijos);
	bool validarCedula(const std::string& cedula);
	bool validarVacio(const std::string& blanco);
};