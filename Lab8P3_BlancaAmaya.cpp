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
        
        char sexo;
        do {
            cout << "Sexo del candidato (M/F): ";
            cin >> sexo;
            sexo = toupper(sexo); // para que este en mayuscula
            if (sexo != 'M' && sexo != 'F') {
                cout << "Sexo invalida, debe ser M o F" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }
        } while (sexo != 'M' && sexo != 'F');
        cin.ignore(1000, '\n');

        int edad;
        bool edadvalida;
        do {
            cout << "Edad del Candidato: ";
            edadvalida = true;
            if (!(cin >> edad)) {
                cout << "Debe ingresar numeros para la edad" << endl;
                edadvalida = false;
                cin.clear();
            }
            if (edad <= 18) {
                cout << "El candidato debe ser mayor a 18" << endl;
                edadvalida = true;
            }
            cin.ignore(1000, '\n');
        } while (edad <= 18 || !edadvalida);

        candidatos.push_back(new Candidato(nombre_candidato, mensaje, sexo, edad, partidos[i], 0));
        cout << endl;
    }
    cout << endl;
    cout << "Cargando departamentos..." << endl;
    cout << "Los departamentos, junto con su respectiva carga electoral, han sido cargados" << endl;
    vector <Departamento*> departamentos2 = departamentos();
    for (int i = 0; i < departamentos2.size(); i++) {
        cout << departamentos2[i] << endl;
    }

    cout << endl;
    int opcion;
    cout << "Datos listo para empezar. La simulación empezará automáticamente, desea salir? " << endl;
    cout << "1. Salir del simulador. " << endl;
    cout << "0. Ver Simulación. " << endl;
    cout << "Ingrese la opcion: "; cin >> opcion;

    if (opcion == 1) {
        cout << "Saliendo del simulador..." << endl;
    }
    else if (opcion != 0) {
        cout << "Opcion invalida" << endl;
        return;
    }

    cout << "Empezando Simulación..." << endl;
    int actasTotal_divulgadas = 0;
    for (int i = 0; i < departamentos2.size(); i++) {
        int actas_dep, totalvotos_dep;
        cout << "Departamento a procesar: " << endl;
        cout << departamentos2[i] << endl;
        int actas_dep = departamentos2[i]->getActas();
        int votostotal_dep = departamentos2[i]->getVotosPorActa();

        for (int j = 0; j < votostotal_dep; j++) {
            int candidatoAlt = generarAlt(0, 4);
            ++(*candidatos[candidatoAlt]); // operador ++ aumentar votos (prefijo)
        }

        actasTotal_divulgadas += actas_dep;
        cout << departamentos2[i]->getNombre 
    }
}

void menu() {
    int opcion;
    bool resp = true;
    while (resp) {
        cout << "<<<<<<<<<< MENÚ >>>>>>>>>>" << endl;
        cout << "1. Consejo Nacional Electoral" << endl;
        cout << "2. Salir." << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcion;
        cout << endl;
        switch (opcion) {
        case 1:
            ConsejoNacionalElectoral();
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