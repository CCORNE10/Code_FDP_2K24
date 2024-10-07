#include <iostream>
using namespace std;

int main() {

int num, sum = 0;
cout << "Ingrese número (Al finalizar precione 0) "; // Indicación es impresa en pantalla con el operador insertar (<<).
cin >> num; // Toma el parámetro con en el operador extraer (>>). 

while (num != 0) { // Ciclo While ejecuta mientras variable no sea == 0
    sum += num; // Operador +=, suma variable enteras 
    cout << "Ingrese número (Para finalizar precione 0) "; // Indicación 
    cin >> num; // Almacena resultado con operador extraer (>>)
}
cout << "La suma total es: " << sum << endl;

return 0;
}