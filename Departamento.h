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
	Departamento(string nombre = "", int actas, int votosporactas);
	~Departamento();

	// Getters
	string getNombre() const;
	int getActas() const;
	int getVotosPorActas() const;
	int getVotosTotal();

	// Setters
	void setNombre(string nombre2);
	void setActas(int actas2);
	void setVotosPorActas(int votosporacta2);

	// Metodos
	friend ostream& operator<<(ostream& os, const Departamento* d);
};

