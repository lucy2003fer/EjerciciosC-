#include "serie.hpp"
#include <iostream>

int serie(int x) {
    int count = 0;
    while (x != 1) {
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = 3 * x + 1;
        }
        count++;
    }
    return count;
}