#include <string>
#include "Libro.h"
#include <vec>

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

	std::string cedula;
	std::string direccion;
	std::string nombre, telefono, especialidad, hentrada, mentrada, hsalida, msalida;

};

const std::string FILEDOCS = "BaseDeDatosDoctores.txt";
const std::string PRINCIPALPersona = "..\\Doctores.txt";

void guardarDoctores(const std::vector<Doctor>& personas) {
	std::ofstream file(FILEDOCS);
	std::ofstream fileDoctores(PRINCIPALDOCTOR);
	if (file.is_open()) {
		for (const auto& doctor : personas) {
			file << doctor.cedula << "," << doctor.nombre << "," << doctor.direccion << "," << doctor.telefono << "," << doctor.especialidad << "," << doctor.hentrada << ":" << doctor.mentrada << "," << doctor.hsalida << ":" << doctor.msalida << "\n";
			fileDoctores << "Cedula: " << doctor.cedula << ", Nombre: " << doctor.nombre << ", Direccion: " << doctor.direccion << ", Telefono: " << doctor.telefono << ", Especialidad: " << doctor.especialidad << ", Hora Entrada: " << doctor.hentrada << ":" << doctor.mentrada << ", Hora Salida: " << doctor.hsalida << ":" << doctor.msalida << "\n\n";
		}
		file.close();
	}
}

std::vector<Doctor> cargarDoctores() {
	std::vector<Doctor> doctores;
	std::ifstream file(FILEDOCS);
	if (file.is_open()) {
		std::string line;
		while (std::getline(file, line)) {
			std::istringstream iss(line);
			std::string cedula, nombre, direccion, telefono, especialidad, hentrada, mentrada, hsalida, msalida;
			if (std::getline(iss, cedula, ',') && std::getline(iss, nombre, ',') && std::getline(iss, direccion, ',') && std::getline(iss, telefono, ',') && std::getline(iss, especialidad, ',') && std::getline(iss, hentrada, ':') && std::getline(iss, mentrada, ',') && std::getline(iss, hsalida, ':') && std::getline(iss, msalida)) {
				doctores.push_back({ cedula, nombre ,direccion,telefono,especialidad,hentrada,mentrada,hsalida,msalida });
			}
		}
		file.close();
	}
	return doctores;
}
};

