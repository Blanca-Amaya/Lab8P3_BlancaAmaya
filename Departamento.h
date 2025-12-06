#pragma once
#include <iostream>
#include <string>
using namespace std;

class Departamento {
private:
	string nombre;
	int actas;
	int votosporacta;
public:
	Departamento(string nombre, int actas, int votosporactas);
	~Departamento();

	// Getters
	string getNombre() const;
	int getActas() const;
	int getVotosPorActa() const;
	int getVotosTotal() const;

	// Setters
	void setNombre(string nombre2);
	void setActa(int actas2);
	void setVotosPorActas(int votosporacta2);

	// Metodos
	friend ostream& operator<<(ostream& os, const Departamento* d);
};

