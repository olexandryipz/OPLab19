#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int* p;
    int x = 10, y = 20;
    int m[5] = { 0, 1, 2, 3, 4 };
    p = &y;

    printf("Значення змінної у через покажчик: %d\n", *p);
    x = *p;
    printf("Значення x після операції x = *p: %d\n", x);
    y += 7;
    *p += 5;

    printf("Значення р після змін: %p\n", (void*)p);
    printf("Значення у після операції *p+=5: %d\n", y);

    return 0;
}
