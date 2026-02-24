#include <stdio.h>

// An array is a collection of elements of the same type stored in contiguous memory locations.
// The size of an array must be a constant expression, and it cannot be changed after the array is declared. 
// The elements of an array are accessed using an index, which starts from 0. The name of the array is a pointer to the first element of the array, and we can use pointer arithmetic to access the elements of the array.

void printArray(int arr[], int size) {
    // This function takes an array of integers and its size as arguments and prints the elements of the array.
    printf("Elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Accessing array elements using index
    }
    printf("\n");
}

void printArrayPointer(int *arr, int size) {
    // This function takes a pointer to an array of integers and its size as arguments and prints the elements of the array.
    printf("Elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // Accessing array elements using pointer arithmetic
    }
    printf("\n");
}

void printArrayPointerIllegal(int *arr, int size) {
    // Incorrectly attempts to print the elements of the array by adding i to the value pointed to by arr, which is not the correct way to access array elements using a pointer.
    printf("Elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", (*arr) + i);  // This is incorrect because it adds i to the value pointed to by arr, not to the address of arr
    }
    printf("\n");
}

int main() {
    // Declare an array of integers with a size of 5
    int arr[5] = {10, 20, 30, 40, 50};

    // Print the elements of the array using a loop
    printf("Elements of the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // Accessing array elements using index
    }
    printf("\n");

    // Print the size of the array in bytes
    printf("Size of the array in bytes: %lu\n", sizeof(arr)); // This will print the total size of the array in bytes (5 * size of int)

    // Print the number of elements in the array
    printf("Number of elements in the array: %lu\n", sizeof(arr) / sizeof(arr[0])); // This will print the number of elements in the array by dividing the total size by the size of one element

    // Pass the array to a function
    printArray(arr, sizeof(arr) / sizeof(arr[0])); 

    // Pass the array to a function using a pointer
    printArrayPointer(arr, sizeof(arr) / sizeof(arr[0]));

    // Pass the array to a function using a pointer with illegal access
    printArrayPointerIllegal(arr, sizeof(arr) / sizeof(arr[0]));
    
    return 0;
}