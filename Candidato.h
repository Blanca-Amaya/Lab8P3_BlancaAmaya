#pragma once
#include <iostream>
#include <string>
#include "Partido.h"

using namespace std;

class Candidato {
private:
	string nombre;
	string mensaje;
	char sexo;
	int edad;
	Partido* partido;
	int votos;

public:
	Candidato(string nombre = "", string mensaje = "", char sexo, int edad, Partido* partido = nullptr, int votos);
	~Candidato();

	// Getters
	string getNombre() const;
	string getMensaje() const;
	char getSexo() const;
	int getEdad() const;
	Partido* getPartido() const;
	int getVotos() const;

	// Setters
	void setNombre(string nombre2);
	void setMensaje(string mensaje2);
	void setSexo(char sexo2);
	void setEdad(int edad2);
	void setPartido(Partido* partido2);
	void setVotos(int votos2);

	// Metodos
	Candidato& operator++();
	Candidato& operator++(int);

	friend ostream operator<<(ostream& os, const Candidato* c);
};