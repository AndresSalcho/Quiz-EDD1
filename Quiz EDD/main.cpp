#include "menu.h"

int main() {
	//menu m;
	//m.run();

	
	listaPersona lp;

	Libro* l1 = new Libro("2213", "Penis", "Cock and Balls", "Caca", "2022", true);
	Libro* l2 = new Libro("223", "Lol", "Cock and Balls", "Caca", "2021", true);


	Libro* ll1[2];
	ll1[0] = l1;
	ll1[1] = l2;

	Persona* p = new Persona("208560456", "Julio", "Sanchez");
	p->setLibros((Libro*) ll1);

	lp.add(p);

	lp.Guardar("../persona.dat");

	return 0;
}