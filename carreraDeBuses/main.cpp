#include <iostream>
#include "buses.hpp"

int main() {
    int n, tiempo;

    std::cout << "¿Cuantos buses participan en la carrera? ";
    std::cin >> n;

    std::vector<Bus> buses;


    for (int i = 0; i < n; ++i) {
        std::string nombre;
        int velocidad;

        std::cout << "Ingrese el nombre del bus #" << (i + 1) << ": ";
        std::cin >> nombre;
        std::cout << "Ingrese la velocidad del bus #" << (i + 1) << " en km/h: ";
        std::cin >> velocidad;

        buses.push_back(Bus(nombre, velocidad));
    }


    std::cout << "¿Cuantos segundos durara la carrera? ";
    std::cin >> tiempo;


    simularCarrera(buses, tiempo);

    return 0;
}
