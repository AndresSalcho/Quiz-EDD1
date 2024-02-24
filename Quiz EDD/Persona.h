#include <string>
#include "listaEN.h"
#include "Libro.h"

using namespace std;

class Persona
{
private:
    string* Libros;
    string Cedula;
    string Nombre;
    string Apellidos;
public:
    Persona();
    ~Persona();

    string* getLibros();
    string getCedula();
    string getNombre();
    string getApellidos();


    void setLibros(string[]);
    void setCedula(string);
    void setNombre(string);
    void setApellidos(string);

    string toString();
};

