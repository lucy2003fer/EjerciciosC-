#include "frecuencia.hpp"
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

char caracterMasComun(const string& texto) {
    unordered_map<char, int> frecuencia;
    for (char c : texto) {
        frecuencia[c]++;
    }

    char maxCaracter = texto[0];
    int maxFrecuencia = frecuencia[maxCaracter];

    for (const auto& par : frecuencia) {
        if (par.second > maxFrecuencia) {
            maxCaracter = par.first;
            maxFrecuencia = par.second;
        }
    }

    return maxCaracter;
}