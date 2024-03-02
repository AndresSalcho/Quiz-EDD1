#include <string>
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <thread>
#include <chrono>
#include <regex>

using namespace std;

class Libro
{
private:

    string autor;
    string id;
    string nombre;
    string editorial;
    string anio;
    string prestado;

public:

    Libro(string id, string nombre, string autor, string editorial, string anio, string prestado);
    ~Libro();

    string getAnio();
    string getid();
    string getNombre();
    string getAutor();
    string getEditorial();

    bool isPrestado();
    void setPrestamo(string);

    void setEditorial(string);
    void setid(string);
    void setNombre(string);
    void setAutor(string);
    void setAnio(string);

    string toString();

    void serialize(ostream& os) const {

        os << id << ',' << nombre << ',' << autor << ',' << editorial << ',' << anio << ',' << prestado << '\n';
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
                id = tk;
            }
            else if (counter == 1) {
                nombre = tk;
            }
            else if (counter == 2) {
                autor = tk;
            }
            else if (counter == 3) {
                editorial = tk;
            }
            else if (counter == 4) {
                anio = tk;
            }
            else if (counter == 5) {
                prestado = tk;
            }
            counter++;
        }
    }
};

