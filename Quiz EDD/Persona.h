#include "Libro.h"

using namespace std;

class Persona
{
private:
    string Libros;
    string Cedula;
    string Nombre;
    string Apellidos;
public:
    Persona(string cedula, string nombre, string apellidos, string libros);
    ~Persona();

    string getLibros();
    string getCedula();
    string getNombre();
    string getApellidos();


    void setLibros(string);
    void setCedula(string);
    void setNombre(string);
    void setApellidos(string);

    string toString();

    void serialize(ostream& os) const {
        os << Cedula << ',' << Nombre << ',' << Apellidos << ',' << Libros << '\n';
    }

    void deserialize(std::istream& is) {
        string aux;
        int counter = 0;

        getline(is, aux);

        vector<string> result;
        istringstream iss(aux);
        string token;

        while (getline(iss, token, ',')) {
            result.push_back(token);
        }

        for (const std::string& tk : result) {
            if (counter == 0) {
                Cedula = tk;
            }else if (counter == 1) {
                Nombre = tk;
            }else if (counter == 2) {
                Apellidos = tk;
            }else if (counter == 3) {
                Libros = tk;
            }
            counter++;
        }
    }
};


