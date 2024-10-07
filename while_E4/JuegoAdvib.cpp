#include <iostream>
#include <ctime> 
using namespace std;

int main() {
    srand(time(0)); // Inicializa números aleatorios

    int random = rand() % 101;  // De manera manual se le puede modificar asignadole en esta línea un número que adiviné en esete caso es usa un ranga de 1 al 100. 
    int adiv = 0;
    int intentos = 0;

    do {
        cout << "Ingresa el numero para adivinar (entre 0 y 100): ";
        cin >> adiv;
        
        if (adiv == random) {
            intentos++; // Incrementar el contador de intentos antes del mensaje final
            cout << "¡Felicidades! Adivinaste el numero en " << intentos << " intentos" << endl;
        } else if (adiv < random) {
            cout << "Fallaste! El numero ingresado es bajo!" << endl;
        } else {
            cout << "Fallaste! El numero ingresado es elevado!" << endl;
        }
        intentos++; // Implemente que el contador iba despues de los intentos fallido
    } while (adiv != random); 

    return 0;
} //La idea de este código fue sacada de este video: https://www.youtube.com/watch?v=8cnxzfCbctE
