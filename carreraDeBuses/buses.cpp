#include "buses.hpp"
#include <iostream>

Bus::Bus(std::string nom, int vel) : nombre(nom), velocidad(vel) {}

int Bus::calcularDistancia(int tiempo) {
    return velocidad * tiempo; 
}

void simularCarrera(std::vector<Bus>& buses, int tiempo) {
    int mayorDistancia = 0;
    std::string ganador;

    for (auto& bus : buses) {
        int distancia = bus.calcularDistancia(tiempo);
        std::cout << bus.nombre << " recorrio " << distancia << " km.\n";
        
        if (distancia > mayorDistancia) {
            mayorDistancia = distancia;
            ganador = bus.nombre;
        }
    }

    std::cout << "El ganador es: " << ganador << " con " << mayorDistancia << " km recorridos.\n";
}
