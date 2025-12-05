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

char Candidato::getSexo() const {
	return sexo;
}

int Candidato::getEdad() const {
	return edad;
}

Partido* Candidato::getPartido() const {
	return partido;
}

int Candidato::getVotos() const {
	return votos;
}

void Candidato::setNombre(string nombre2) {
	nombre = nombre2;
}

void Candidato::setMensaje(string mensaje2) {
	mensaje = mensaje2;
}

void Candidato::setSexo(char sexo2) {
	sexo = sexo2;
}

void Candidato::setEdad(int edad2) {
	edad = edad2;
}

void Candidato::setPartido(Partido* partido2) {
	partido = partido2;
}

void Candidato::setVotos(int votos2) {
	votos = votos2;
}

Candidato& Candidato::operator++() {

}
