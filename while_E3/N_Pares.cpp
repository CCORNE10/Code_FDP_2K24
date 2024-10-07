#include <iostream>
using namespace std;

int main() {
    int N, contador = 0, num = 0;

    cout << "Ingresa un numero entero positivo: ";
    cin >> N;

    while (contador < N) {
        cout << num << " ";
        num += 2;
        contador++;
    }

    cout << endl;
    return 0;
}