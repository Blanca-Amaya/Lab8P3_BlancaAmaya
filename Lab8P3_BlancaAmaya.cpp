#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Partido.h"
#include "Departamento.h"
#include "Candidato.h"
using namespace std;

// liberar memoria
void LiberarMemoria() {

}

// genera numeros alt en un rango (actas = 200, 500), votosPorActas(1000, 2000) 
int generarAlt(int max, int minimo) {
    return minimo + rand() % (max - minimo + 1);
}

// generando las actas y votos por actas para cada departamento
vector<Departamento*> departamentos() {
    vector<Departamento*> departamentos;
    vector<string> nombre_dep = { "Atlántida", "Choluteca", "Colon", "Comayagua", "Copan", "Cortes", "El Paraiso", "Francisco Morazan", "Gracias a Dios", "Intibuca", "Islas de la Bahia", "La Paz", "Lempira", "Ocotepeque", "Olancho", "Santa Barbara", "Valle", "Yoro" };

    for (int i = 0; i < 18; i++) {
        int actas = generarAlt(200, 500);
        int votosporactas = generarAlt(1000, 2000);
        departamentos.push_back(new Departamento(nombre_dep[i], actas, votosporactas));
    }
    return departamentos;
}

void ConsejoNacionalElectoral() {
    cout << "~~~~~ SIMULADOR DE CONSEJO NACIONAL ELECTORAL ~~~~~" << endl;
    cout << "-- Instrucciones: " << endl;
    cout << "Ingrese los 5 partido políticos que lucharan por el poder: " << endl;
    vector <Partido*> partidos;
    for (int i = 0; i < 5; i++) {
        string nombre_partido;
        cout << "Nombre del Partido No. " << i + 1 << ": ";
        cin >> nombre_partido;
        partidos.push_back(new Partido(nombre_partido));
        cout << endl; 
    }
    cout << endl;
    cout << "Listo. Ahora, ingrese los candidatos presidenciales pertencientes a cada partido previamente ingresado: " << endl;
    vector<Candidato*> candidatos;
    for (int i = 0; i < 5; i++) {
        cout << "Candidato perteneciente al " << partidos[i]->getNombre() << endl;
        cout << "Nombre del Candidato: "; 
        string nombre_candidato;
        cin >> nombre_candidato;
        cout << "Mensaje del Candidato: ";
        string mensaje;
        cin >> mensaje;
        cout << "Sexo del candidato (M/F): ";
        char sexo;
        cin >> sexo;
        cout << "Edad del candidato: ";
        int edad;
        cin >> edad;
        candidatos.push_back(new Candidato(nombre_candidato, mensaje, sexo, edad, partidos[i], 0));
        cout << endl;
    }
    cout << endl;
    cout << "Cargando departamentos..." << endl;
    cout << "Los departamentos, junto con su respectiva carga electoral, han sido cargados" << endl;
    vector <Departamento*> departamentos2 = departamentos();
    for (int i = 0; i < departamentos2.size(); i++) {
        cout << 
    }
}

void menu() {
    int opcion;
    bool resp = true;
    while (resp) {
        cout << "<<<<<<<<<< MENÚ >>>>>>>>>>" << endl;
        cout << "1. Consejo Nacional Electoral" << endl;
        cout << "2. Salir." << endl;
        cin >> opcion;
        switch (opcion) {
        case 1:

        case 2:
            cout << "Saliendo..." << endl;
            resp = false;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    }
}

int main() {
    srand(time(0));
    menu();
}