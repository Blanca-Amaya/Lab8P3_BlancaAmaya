#pragma once
#include <iostream>
#include <string>
using namespace std;

class Partido {
private:
	string nombre;
public:
	Partido(string nombre = "");
	~Partido();

	// Getters
	string getNombre() const;
	
	// Setter
	void setNombre(string nombre2);

	// Metodos
};

