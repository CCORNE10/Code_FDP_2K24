#include <iostream> // Incluye la biblioteca estándar de entrada/salida, necesaria para utilizar cin y cout.
using namespace std; // Evita escribir std:: antes de elementos del espacio de nombres estándar.

int main() {
    int num; // Almacena el numero entero ingresado por el usuario.
    int contador = 0; // Inicializa un contador en 0 para llevar la cuenta de los dígitos.
    cout << "Ingresa un numero entero positivo: "; //Imprime un mensaje en la consola solicitando al usuario que ingrese un número.
    cin >> num; //  Lee el número ingresado por el usuario y lo almacena en la variable num.

    while (num != 0) { //  El bucle se ejecuta mientras el valor de num sea diferente de 0. 
        num /= 10; //  Divide el valor de num entre 10 y asigna el resultado a num. Esto elimina el último dígito del número.
        contador++; //  Incrementa el contador en 1 cada vez que se elimina un dígito.
    }

    cout << "El numero tiene " << contador << " digitos." << endl; // Imprime en la consola el número de dígitos encontrados.

    return 0;
}