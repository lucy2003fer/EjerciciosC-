#include <iostream>
#include "subconjuntos.hpp"

void imprimirSubconjuntos(const std::vector<std::vector<int>>& subconjuntos) {
    std::cout << "Subconjuntos generados:\n";
    for (const auto& subconjunto : subconjuntos) {
        std::cout << "{ ";
        for (int num : subconjunto) {
            std::cout << num << " ";
        }
        std::cout << "}\n";
    }
}

int main() {
    int n;
    std::cout << "Ingrese el tamaño del conjunto: ";
    std::cin >> n;

    std::vector<int> conjunto(n);
    std::cout << "Ingrese los elementos del conjunto:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> conjunto[i];
    }

    std::vector<std::vector<int>> subconjuntos;
    generarSubconjuntos(conjunto, subconjuntos);

    imprimirSubconjuntos(subconjuntos);

    return 0;
}
