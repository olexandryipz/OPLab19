#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    srand(time(0));

    int size = 10;
    int* array = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        array[i] = generateRandomNumber(1, 100);
    }

    printf("Одновимірний масив:: ");
    printArray(array, size);
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = array[minIndex];
    array[minIndex] = array[maxIndex];
    array[maxIndex] = temp;

    printf("Масив після зміни місцями мінімальний і максимальний елементи: ");
    printArray(array, size);

    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    double average = sum / size;

    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] <= 1.1 * average) {
            array[newSize] = array[i];
            newSize++;
        }
    }

    printf("Масив після видалення елементів, що перевищують середнє значення більш, ніж на 10 відсотків: ");
    printArray(array, newSize);

    free(array);

    return 0;
}
