#include <iostream>
using namespace std;

void menu() {
    int opcion;
    bool resp = true;
    while (resp) {
        cout << "1. " << endl;
        cin >> opcion;
        switch (opcion) {
        case 1:
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    }
}

int main() {
    menu();
}