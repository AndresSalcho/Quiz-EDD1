#pragma once
#include "nodo.h"

/*Nota de Salchicha: La lista es creada por mi y se encuentra por separado en mi repositorio, se puede modificar sin problemas*/

template <class T>
class lista
{
private:
	nodo<T>* cabeza;
	int size;
public:
	lista();
	~lista();
	int getSize();
	bool isEmpty();
	void agregarFinal(T);
	T popItem();
	void borrar(T);
	void imprimirObjeto(T);
	void imprimirALL();
};

template<class T>
lista<T>::lista() {
	cabeza = NULL;
	size = 0;
}

template<class T>
lista<T>::~lista() {
}

//Devuelve el tamaño de la lista
template<class T>
int lista<T>::getSize() {
	return size;
}

//Devuelve true o false segun si esta vacia o no la lista
template<class T>
bool lista<T>::isEmpty() {
	if (cabeza == NULL) {
		return true;
	}
	else {
		return false;
	}
}

/*Agrega un elemento al final de la lista
* Crea un nodo nuevo con la informacion que se necesita guardar
* y comprueba si se encuentra vacia, si fuera el caso solo asigna ese valor a la cabeza,
* de lo contrario crea un nodo temporal para iterar a travez de ella hasta el ultimo
* nodo de la lista y lo inserta despues de el
*/
template<class T>
void lista<T>::agregarFinal(T data) {
	nodo<T>* nuevo = new nodo<T>(data, nullptr);
	if (isEmpty()) {
		this->cabeza = new nodo<T>(data, nullptr);
	}
	else {
		nodo<T>* temp = this->cabeza;
		while (temp->getSiguiente()) {
			temp = temp->getSiguiente();
		}
		temp->setSiguiente(nuevo);
	}
	this->size++;
}

template<class T>
T lista<T>::popItem() {
	T aux;
	if (cabeza != NULL) {
		aux = cabeza->getDato();
		cabeza = cabeza->getSiguiente();
		this->size--;
	}
	else {
		aux = NULL;
	}

	return aux;
}

template<class T>
void lista<T>::borrar(T x) {
	if (cabeza == NULL) {
		cout << "La lista está vacía!";
	}
	else if (cabeza->getDato() == x) {
		nodo<T>* temp = cabeza;
		cabeza = temp->getSiguiente();

	}
	else {
		nodo<T>* temp = cabeza;
		while (temp->getSiguiente()->getDato() != x) {
			temp = temp->getSiguiente();
		}
		temp->setSiguiente(temp->getSiguiente()->getSiguiente());
	}
}

/*Itera la lista hasta encontar un elemento igual al que se esta
* bucando y lo imprime, si no se encuentra va a decir que no existe
 */
template <class T>
void lista<T>::imprimirObjeto(T data) {
	bool found = false;

	if (cabeza == NULL) {
		cout << "La lista se encuentra vacia";
	}
	else {
		nodo<T>* temp = this->cabeza;
		while (temp) {
			if (temp->getDato() == data) {
				cout << temp->getDato();
				found = true;
			}

			temp = temp->getSiguiente();

		}
		if (found) {
			cout << endl;
		}
		else
		{
			cout << "El elemento no existe en la lista!!!";
		}
	}
}

/*Itera la lista entera e imprime cada elemento uno por uno,
 *hasta el final de la lista, si estuviera vacia va a avisar
 */
template <class T>
void lista<T>::imprimirALL() {
	if (cabeza == NULL) {
		cout << "La lista se encuentra vacia";
	}
	else {
		nodo<T>* temp = this->cabeza;
		while (temp) {
			cout << temp->getDato() << " -> ";
			temp = temp->getSiguiente();
		}
		cout << endl;
	}
}


