#include <iostream>
#include <string>

char caracterMasComun(const std::string& texto) {
    int frecuencia[256] = {0};  

    for (char c : texto) {
        
        frecuencia[c]++; 
    }

    
    char caracterComun = texto[0];
    int maxFrecuencia = 0;
    for (char c : texto) {
        if (frecuencia[c] > maxFrecuencia) {
            maxFrecuencia = frecuencia[c];
            caracterComun = c;
        }
    }

    return caracterComun;
}

int main() {
    std::string texto;
    std::cout << "Ingrese una cadena de texto: ";
    std::getline(std::cin, texto);
    
    char resultado = caracterMasComun(texto);
    std::cout << "El carácter más común es: " << resultado << std::endl;

    return 0;
}

