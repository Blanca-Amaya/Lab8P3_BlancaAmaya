#include "Candidato.h"

Candidato::Candidato(string nombre, string mensaje, char sexo, int edad, Partido* partido, int votos) : nombre(nombre), mensaje(mensaje), sexo(sexo), edad(edad), partido(partido), votos(votos){

}

Candidato::~Candidato() {

}

string Candidato::getNombre() const {
	return nombre;
}

string Candidato::getMensaje() const {
	return mensaje;
}
