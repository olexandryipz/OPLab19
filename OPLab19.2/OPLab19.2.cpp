#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

int main() {
    int array[] = { 0, 1, 2, 3, 4 };

    size_t size_in_bytes = sizeof(array);
    size_t num_elements = sizeof(array) / sizeof(array[0]);

    printf("Розмір масиву в байтах: %zu\n", size_in_bytes);
    printf("Кількість елементів масиву: %zu\n", num_elements);

    printf("Адреса першого елементу: %p\n", (void*)&array[0]);
    printf("Адреса останнього елементу: %p\n", (void*)&array[num_elements - 1]);

    int temp;
    for (size_t i = 0; i < num_elements / 2; i++) {
        temp = array[i];
        array[i] = array[num_elements - 1 - i];
        array[num_elements - 1 - i] = temp;
    }

    printf("Масив у зворотному порядку: ");
    for (size_t i = 0; i < num_elements; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
