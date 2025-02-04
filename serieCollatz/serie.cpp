#include "serie.hpp"
#include <iostream>

using namespace std;
int main(){
    int x;
    cout << "Ingrese el valor a hacer la serie: ";
    cin >> x;
    int calculos = serie(x);
    cout << "El numero de calculos fue: " << calculos << endl;
    return 0;
}