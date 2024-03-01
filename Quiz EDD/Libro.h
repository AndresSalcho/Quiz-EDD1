#include <string>

using namespace std;

class Libro
{
private:

    string autor;
    string id;
    string nombre;
    string editorial;
    string anio;
    bool prestado;

public:

    Libro(string id, string nombre, string autor, string editorial, string anio, bool prestado);
    ~Libro();

    string getAnio();
    string getid();
    string getNombre();
    string getAutor();
    string getEditorial();

    bool isPrestado();
    void setPrestamo(bool);

    void setEditorial(string);
    void setid(string);
    void setNombre(string);
    void setAutor(string);
    void setAnio(string);

    string toString();
};

