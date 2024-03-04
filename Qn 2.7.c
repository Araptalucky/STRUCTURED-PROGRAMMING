# include <stdio.h>

// A function to insert x at the first position of arr
 void insertFirst(int arr[], int n, int x) {
    // Shift all elements one position to be the right 
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    // Assign x to the first position
    arr[0] = x;
}

// A function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        printf("\n");
        }
        return;
        }