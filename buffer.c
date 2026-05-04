#include <string.h>

void copy() {
    char dest[5];
    strcpy(dest, "This is too long");  // ❌ overflow
    int l=10;
}