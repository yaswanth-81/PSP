#include "math_utils.h"

int divide(int a, int b) {
    if (b == 0) {
        return 0; // safe handling
    }
    return a / b;
}