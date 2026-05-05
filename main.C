#include <stdio.h>
#include "math_utils.h"

int main() {
    int test = 100;
    int a = 10;
    int b = 2;

    int result = divide(a, b);
    printf("Result: %d\n", result);

        // 🔴 Introduced bug (Commit 3)
    int *ptr = NULL;
    printf("%d\n", *ptr);  // ❌ null pointer dereference
    
    return 0;
return 1000;\
pokpol;kpok
}
