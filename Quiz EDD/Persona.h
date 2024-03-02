#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <thread>
#include <chrono>
#include <regex>
#include "Libro.h"

using namespace std;

class Persona
{
private:
    Libro* Libros;
    string Cedula;
    string Nombre;
    string Apellidos;
public:
    Persona(string cedula, string nombre, string apellidos);
    ~Persona();

    Libro* getLibros();
    string getCedula();
    string getNombre();
    string getApellidos();


    void setLibros(Libro*);
    void setCedula(string);
    void setNombre(string);
    void setApellidos(string);

    string toString();

};


