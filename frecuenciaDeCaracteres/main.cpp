#include <iostream>
#include <string>
#include "frecuencia.hpp"
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una cadena de texto: ";
    cin >> texto;

    char resultado = caracterMasComun(texto);
    cout << "La letra mas repetida es: " << resultado << endl;

    return 0;
}