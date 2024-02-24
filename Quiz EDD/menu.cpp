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

void menu::run() {

	string ez1, ez2, ez3, ez4, rec, ver;
	int op = 1, y = 1, cursor;

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
				cout << "Hola" << endl;
				system("pause");
				system("cls");
				break;
			case 2:
				system("cls");
				rlutil::showcursor();
				cout << "Hola" << endl;
				system("pause");
				system("cls");
				break;
			case 3:
				system("cls");
				rlutil::showcursor();
				cout << "Hola" << endl;
				system("pause");
				system("cls");
				break;
			case 4:
				system("cls");
				rlutil::showcursor();
				cout << "Hola" << endl;
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