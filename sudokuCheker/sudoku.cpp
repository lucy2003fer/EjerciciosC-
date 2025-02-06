#include "sudoku.hpp"
#include <iostream>
using namespace std;

bool tableroValido(const array<array<int, 9>, 9>& tablero) {

    for (int i = 0; i < 9; i++) {
        bool numeros[10] = {false}; 
        for (int j = 0; j < 9; j++) {
            int num = tablero[i][j];
            if (num != 0) { 
                if (numeros[num]) {
                    return false;
                }
                numeros[num] = true;
            }
        }
    }

    for (int j = 0; j < 9; j++) {
        bool numeros[10] = {false}; 
        for (int i = 0; i < 9; i++) {
            int num = tablero[i][j];
            if (num != 0) { 
                if (numeros[num]) {
                    return false; 
                }
                numeros[num] = true;
            }
        }
    }

    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            bool numeros[10] = {false};
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    int num = tablero[i + k][j + l];
                    if (num != 0) { 
                        if (numeros[num]) {
                            return false; 
                        }
                        numeros[num] = true;
                    }
                }
            }
        }
    }

    return true; 
}