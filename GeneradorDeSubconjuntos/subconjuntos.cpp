#include "subconjuntos.hpp"
#include <iostream>

void generarSubconjuntos(const std::vector<int>& conjunto, std::vector<std::vector<int>>& subconjuntos) {
    int n = conjunto.size();
    int totalSubconjuntos = 1 << n;

    for (int mascara = 0; mascara < totalSubconjuntos; ++mascara) {
        std::vector<int> subconjunto;
        for (int j = 0; j < n; ++j) {
            if (mascara & (1 << j)) {
                subconjunto.push_back(conjunto[j]);
            }
        }
        subconjuntos.push_back(subconjunto);
    }
}
