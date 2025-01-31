#include "sumatoria.hpp"
Implementando la función sumatoria que suma todos los números desde 1 hasta el número ingresado por el usuario
int sumatoria(int n){
    int suma = 0;
    for(int i = 0; i <= n; i++){
        suma += i;
    }
    return suma;
}