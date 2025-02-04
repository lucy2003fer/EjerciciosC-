#include <iostream>
#include <array>
#include "sudoku.hpp"
using namespace std;

int main() {
    array<array<int, 9>, 9> tablero;

    cout << "Ingrese el tablero de Sudoku (0 para espacios vacios):"<< endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << "Ingrese el valor en la fila " << i+1 << ", columna " << j+1 << ": ";
            cin >> tablero[i][j];
        }
    }

    if (tableroValido(tablero)) {
        cout << "El tablero de Sudoku es valido." << endl;
    } else {
        cout << "El tablero de Sudoku NO es valido." << endl;
    }

    return 0;
}