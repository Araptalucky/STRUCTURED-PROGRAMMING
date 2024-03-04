#include <stdio.h>

int main()
{
    // Declare an integer array of size 10
    int arr[10];

    // Declare a variable to store the size of the array
    int n;
    // prompt the user to enter the size of the array 
    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    // Check if the size is valid
    if (n < 1 || n > 10)
    {
        // Print an error message and exit the program
        printf("Invalid size.\n");
        return 0;
    }

    // Prompt the user to enter the elements of the array
    printf("Enter the elements of the array: ");

    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Declare a variable to store the last element of the array
    int last;

    
    last = arr[n - 1];

    printf("The last element of the array is %d.\n", last);

    return 0;
}