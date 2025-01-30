//
// Created by David on 1/13/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include "arraytools.h"
void initialize_array(int * array, const int new_size, const int old_size) {
    // Check if the array is null.
    if (array == NULL) {
        printf("Input array is NULL\n");
        exit(1);
    }
    // Check if the array grew or shrank.
    if (old_size < new_size) {
        // If the array grew, assign the index values to the new elements of the array.
        for (int i = old_size; i < new_size; i++) {
            array[i] = i;
        }
    }
}

void print_array(const int * array, const int size) {
    // Check if array is null.
    if (array == NULL) {
        printf("Input array is NULL\n");
        exit(1);
    }

    // Print each element of the array to the console.
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int* resize_array(void* array, const int new_size) {
    // Assign the resized array to temp variable.
    int* new_array = (int*)realloc(array,new_size * sizeof(int));
    // Check if the resized array is null.
    if (new_array == NULL) {
        free(array);
        printf("Memory allocation failed\n");
        exit(1);
    }
    // Return the pointer of the temp variable.
    return new_array;
}

void get_array_size(int *size) {
    printf("Enter the size of the array: ");
    scanf("%d", size);
}