#include <iostream>
using namespace std;

int main() {
    double cm;
    int opcion;

    cout << "Ingresa una cantidad en centímetros: ";
    cin >> cm;
    
    cout << "Elige una opción para convertir:\n";
    cout << "1. A metros\n";
    cout << "2. A milímetros\n";
    cout << "3. A kilómetros\n";
    cout << "Elige una opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << cm << " cm = " << cm / 100 << " metros" << endl;
            break;
        case 2:
            cout << cm << " cm = " << cm * 10 << " milímetros" << endl;
            break;
        case 3:
            cout << cm << " cm = " << cm / 100000 << " kilómetros" << endl;
            break;
        default:
            cout << "Opción no válida" << endl;
    }

    return 0;
}
