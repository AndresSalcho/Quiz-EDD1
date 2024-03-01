#include "menu.h"
#include "rlutil.h"
#include <random>
#include <regex>
#include <sstream>

using namespace std;

menu::menu() {

}

menu::~menu() {

}

#include "rlutil.h"
#include <random>
#include <regex>
#include <sstream>

using namespace std;

bool menu::validarNumero(const std::string& hijos) {
	std::regex formato("^([0-9]|[1-3][0-9]|40)$");
	if (std::regex_match(hijos, formato)) {
		return false;
	}

	return true;
}

bool menu::validarCedula(const std::string& cedula) {
	std::regex formato("^[1-8]\\d{8}$");
	if (std::regex_match(cedula, formato)) {
		return false;
	}

	return true;
}

bool menu::validarVacio(const std::string& blanco) {
	std::regex formato(".*\\S.*");
	if (std::regex_match(blanco, formato)) {
		return false;
	}

	return true;
}

void menu::run() {

	string Cedula, Nombre, Apellido, CantidadLibros, modCedula;
	string idLibro, Autor, NombreLibro, Fecha, AgregarLibro;
	string auxLibros;
	string ez1, ez2, ez3, ez4, rec, ver;
	int op = 1, y = 1, cursor, i, auxCantidadLibros;

	ez1 = (char)201;
	ez2 = (char)187;
	ez3 = (char)200;
	ez4 = (char)188;
	rec = (char)205;
	ver = (char)186;
	rlutil::hidecursor();
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	std::random_device rd;
	std::uniform_int_distribution<int> dist(2500, 15000);

	do {

		rlutil::setColor(rlutil::color::LIGHTBLUE);
		rlutil::locate(26, 2);
		cout << char(167) << " LIBRERIA RINTINTIN " << char(167) << endl;
		rlutil::locate(25, 3);
		cout << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << endl;
		rlutil::setColor(rlutil::color::WHITE);
		rlutil::locate(15, 5);
		cout << ez1 << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << ez2 << endl;
		rlutil::locate(15, 6);
		cout << ver << "        Agregar Persona a la lista          " << ver << endl;
		rlutil::locate(15, 7);
		cout << ver << "   Agregar un libro a la lista de libros    " << ver << endl;
		rlutil::locate(15, 8);
		cout << ver << "    Mostrar todas las personas y libros     " << ver << endl;
		rlutil::locate(15, 9);
		cout << ver << "   Mostrar libros asociados a una persona   " << ver << endl;
		rlutil::locate(15, 10);
		cout << ver << "                   Salir                    " << ver << endl;
		rlutil::locate(15, 11);
		cout << ez3 << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << ez4 << endl;
		rlutil::locate(15, 12);
		cout << " " << endl;
		rlutil::locate(15, 13);
		cout << " " << endl;

		rlutil::locate(17, 5 + y);
		rlutil::setColor(rlutil::color::LIGHTBLUE);
		cout << (char)175 << endl;
		rlutil::locate(58, 5 + y);
		rlutil::setColor(rlutil::color::LIGHTBLUE);
		cout << (char)174 << endl;
		cursor = rlutil::getkey();
		rlutil::setColor(rlutil::color::WHITE);
		switch (cursor) {

		case 14: //Arriba
			rlutil::locate(17, 5 + y);
			cout << " " << endl;
			y--;
			if (y < 1) { y = 1; }
			break;
		case 15: //Abajo
			rlutil::locate(17, 5 + y);
			cout << " " << endl;
			y++;
			if (y > 5) { y = 5; }
			break;
		case 1: //Enter
			switch (y) {
			case 1:
				system("cls");
				rlutil::showcursor();

				rlutil::locate(15, 5);
				cout << ez1 << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << ez2 << endl;
				rlutil::locate(15, 6);
				cout << ver << "  Digite la cedula:                                               " << ver << endl;
				rlutil::locate(15, 7);
				cout << ver << "  Digite el nombre:                                               " << ver << endl;
				rlutil::locate(15, 8);
				cout << ver << "  Digite el apellido:                                             " << ver << endl;
				rlutil::locate(15, 9);
				cout << ver << "  Digite la cantidad de libros:                                   " << ver << endl;
				rlutil::locate(15, 10);
				cout << ez3 << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << ez4 << endl;

				do {
					rlutil::locate(38, 6);
					cout << "                                " << endl;
					rlutil::locate(36, 6);
					rlutil::setColor(rlutil::color::LIGHTBLUE);
					cout << (char)175 << endl;
					rlutil::setColor(rlutil::color::WHITE);
					rlutil::locate(38, 6);
					getline(cin, Cedula);
				} while (validarCedula(Cedula));

				rlutil::locate(36, 6);
				cout << " " << endl;

				do {
					rlutil::locate(38, 7);
					cout << "                                " << endl;
					rlutil::locate(36, 7);
					rlutil::setColor(rlutil::color::LIGHTBLUE);
					cout << (char)175 << endl;
					rlutil::setColor(rlutil::color::WHITE);
					rlutil::locate(38, 7);
					getline(cin, Nombre);
				} while (validarVacio(Nombre));

				rlutil::locate(36, 7);
				cout << " " << endl;

				do {
					rlutil::locate(40, 8);
					cout << "                                " << endl;
					rlutil::locate(38, 8);
					rlutil::setColor(rlutil::color::LIGHTBLUE);
					cout << (char)175 << endl;
					rlutil::setColor(rlutil::color::WHITE);
					rlutil::locate(40, 8);
					getline(cin, Apellido);
				} while (validarVacio(Apellido));

				rlutil::locate(38, 8);
				cout << " " << endl;

				do {
					rlutil::locate(50, 9);
					cout << "                                " << endl;
					rlutil::locate(48, 9);
					rlutil::setColor(rlutil::color::LIGHTBLUE);
					cout << (char)175 << endl;
					rlutil::setColor(rlutil::color::WHITE);
					rlutil::locate(50, 9);
					getline(cin, CantidadLibros);
				} while (validarNumero(CantidadLibros));

				rlutil::locate(48, 9);
				cout << " " << endl;

				auxCantidadLibros = stoi(CantidadLibros);

				rlutil::locate(15, 12);
				rlutil::setColor(rlutil::color::WHITE);
				cout << "Digite los nombres de los libros:" << endl;

				for (i = 1; i <= auxCantidadLibros; i++) {

					do {
						rlutil::locate(18, 13 + i);
						cout << "                                " << endl;
						rlutil::locate(15, 13 + i);
						rlutil::setColor(rlutil::color::LIGHTBLUE);
						cout << i << " " << (char)175 << endl;
						rlutil::setColor(rlutil::color::WHITE);
						rlutil::locate(18, 13 + i);
						getline(cin, AgregarLibro);
					} while (validarVacio(AgregarLibro));

					auxLibros = auxLibros + " , " + AgregarLibro;

				}
				auxLibros = "";

				rlutil::locate(15, 30);
				system("pause");
				system("cls");
				break;
			case 2:
				system("cls");
				rlutil::showcursor();

				rlutil::locate(15, 5);
				cout << ez1 << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << ez2 << endl;
				rlutil::locate(15, 6);
				cout << ver << "  Digite id libro:                                                " << ver << endl;
				rlutil::locate(15, 7);
				cout << ver << "  Digite Nombre:                                                  " << ver << endl;
				rlutil::locate(15, 8);
				cout << ver << "  Digite Autor:                                                   " << ver << endl;
				rlutil::locate(15, 9);
				cout << ver << "  Digite el A" << (char)164 << "o:                                                  " << ver << endl;
				rlutil::locate(15, 10);
				cout << ez3 << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << ez4 << endl;

				do {
					rlutil::locate(38, 6);
					cout << "                                " << endl;
					rlutil::locate(36, 6);
					rlutil::setColor(rlutil::color::LIGHTBLUE);
					cout << (char)175 << endl;
					rlutil::setColor(rlutil::color::WHITE);
					rlutil::locate(38, 6);
					getline(cin, idLibro);
				} while (validarVacio(idLibro));

				do {
					rlutil::locate(38, 7);
					cout << "                                " << endl;
					rlutil::locate(36, 7);
					rlutil::setColor(rlutil::color::LIGHTBLUE);
					cout << (char)175 << endl;
					rlutil::setColor(rlutil::color::WHITE);
					rlutil::locate(38, 7);
					getline(cin, NombreLibro);
				} while (validarVacio(NombreLibro));

				do {
					rlutil::locate(38, 8);
					cout << "                                " << endl;
					rlutil::locate(36, 8);
					rlutil::setColor(rlutil::color::LIGHTBLUE);
					cout << (char)175 << endl;
					rlutil::setColor(rlutil::color::WHITE);
					rlutil::locate(38, 8);
					getline(cin, Autor);
				} while (validarVacio(Autor));

				do {
					rlutil::locate(38, 9);
					cout << "                                " << endl;
					rlutil::locate(36, 9);
					rlutil::setColor(rlutil::color::LIGHTBLUE);
					cout << (char)175 << endl;
					rlutil::setColor(rlutil::color::WHITE);
					rlutil::locate(38, 9);
					getline(cin, Fecha);
				} while (validarVacio(Fecha));

				rlutil::locate(15, 30);
				system("pause");
				system("cls");
				break;
			case 3:
				system("cls");
				rlutil::showcursor();



				rlutil::locate(15, 30);
				system("pause");
				system("cls");
				break;
			case 4:
				system("cls");
				rlutil::showcursor();

				rlutil::locate(15, 2);
				cout << ez1 << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << ez2;
				rlutil::locate(15, 3);
				cout << ver << " Digite cedula del empleado:                                                              " << ver;
				rlutil::locate(15, 4);
				cout << ez3 << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << ez4;

				rlutil::locate(45, 3);
				rlutil::setColor(rlutil::color::LIGHTBLUE);
				cout << (char)175 << endl;
				rlutil::setColor(rlutil::color::WHITE);
				rlutil::locate(47, 3);
				getline(cin, modCedula);
				rlutil::locate(45, 3);
				cout << "  " << endl;

				rlutil::locate(15, 30);
				system("pause");
				system("cls");
				break;
			case 5:
				rlutil::setColor(rlutil::color::GREEN);
				rlutil::locate(27, 15);
				cout << ez1 << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << ez2;
				rlutil::locate(27, 16);
				cout << ver << " ! Salida Exitosa ! " << ver;
				rlutil::locate(27, 17);
				cout << ez3 << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << rec << ez4;
				rlutil::setColor(rlutil::color::WHITE);

				rlutil::locate(15, 25);

				op = 0;
				break;
			}
		}
	} while (op != 0);
}