#include <stdio.h>
#include "myarray.h"


int findMaxIndex(int arr[], int size) {
    int M = 0;
    for (int i = 1; i < size; i++)
        if (arr[i] > arr[M])
            M = i;
    return M;
}

int findMinIndex(int arr[], int size) {
    int m = 0;
    for (int i = 1; i < size; i++)
        if (arr[i] < arr[m])
            m = i;
    return m;
}

float findAverage(int arr[], int size) {
    int s = 0;
    for (int i = 0; i < size; i++)
        s += arr[i];
    return (float)s / size;
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++)
        if (arr[i] == value)
            return i;
    return -1;
}