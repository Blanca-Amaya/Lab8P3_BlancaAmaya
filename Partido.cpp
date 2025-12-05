#include "Partido.h"

Partido::Partido(string nombre) : nombre(nombre) {

}

Partido::~Partido() {

}

string Partido::getNombre() const {
	return nombre;
}

void Partido::setNombre(string nombre2) {
	nombre = nombre2;
}
