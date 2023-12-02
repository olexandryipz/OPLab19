#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

void pArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swapElements(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int size = 6;
    int array[] = { 11, 13, 15, 12, 14, 16 };

    printf("Одновимірний масив: ");
    pArray(array, size);

    swapElements(array, size);

    printf("Масив після зміни місцями елементів з парними і непарними індексами: ");
    pArray(array, size);

    return 0;
}
