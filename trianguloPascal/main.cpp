#include "triangulo.hpp"
#include <iostream>
using namespace std;

int main(){
    int alt;
    cout << "Ingrese la altura del triangulo: ";
    cin >> alt;
    triangulo(alt);
    return 0;
}