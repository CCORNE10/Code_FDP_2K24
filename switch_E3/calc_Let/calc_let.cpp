#include <iostream>
using namespace std;

int main() {
    int calificacion;

    cout << "Ingresa una calificación (0-100): ";
    cin >> calificacion;

    switch (calificacion / 10) {
        case 10:
        case 9:
            cout << "Calificación: A" << endl;
            break;
        case 8:
            cout << "Calificación: B" << endl;
            break;
        case 7:
            cout << "Calificación: C" << endl;
            break;
        case 6:
            cout << "Calificación: D" << endl;
            break;
        default:
            cout << "Calificación: F" << endl;
    }

    return 0;
}
