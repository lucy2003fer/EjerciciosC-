#ifndef BUSES_HPP
#define BUSES_HPP

#include <string>
#include <vector>

class Bus {
public:
    std::string nombre;
    int velocidad; 

    Bus(std::string nom, int vel);
    int calcularDistancia(int tiempo); 
};

void simularCarrera(std::vector<Bus>& buses, int tiempo);

#endif
