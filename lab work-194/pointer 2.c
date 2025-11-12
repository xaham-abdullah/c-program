#include <stdio.h>

int main() {
    int y = 5;
    int z = 6;
    int const *yPtr = &y;

    printf("yPtr points to: %p (value = %d)\n", yPtr, *yPtr);

    yPtr = &z;  // legal: pointer now points to z

    printf("yPtr now points to: %p (value = %d)\n", yPtr, *yPtr);

    return 0;
}

