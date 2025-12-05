#include "Departamento.h"

Departamento::Departamento(string nombre, int actas, int votosporactas) : nombre(nombre), actas(actas), votosporacta(votosporactas){

}

Departamento::~Departamento() {

}

string Departamento::getNombre() const {
	return nombre;
}

int Departamento::getActas() const {
	return actas;
}

int Departamento::getVotosPorActa() const {
	return votosporacta;
}

void Departamento::setNombre(string nombre2) {
	nombre = nombre2;
}

void Departamento::setActa(int actas2) {
	actas = actas2;
}

void Departamento::setVotosPorActas(int votosporacta2) {
	votosporacta = votosporacta2;
}

ostream& operator<<(ostream& os, const Departamento* d) {
	os << d->nombre << " Actas: " << d->actas << " Votos por cada Acta: " << d->votosporacta;
	return os;
}
