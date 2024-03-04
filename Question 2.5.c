#include<stdio.h>
 
int main()
{
    int n; // the size of the array
    float array[100]; // the array of floating point numbers
    float min; // the smallest element in the array

    printf("Enter the size of the array: ");
    scanf("%d", &n); // read the size from the user

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &array[i]); // read each element from the user
    }

    min = array[0]; // assume the first element is the smallest
    for (int i = 1; i < n; i++)
    {
        if (array[i] < min) // compare each element with the current minimum
        {
            min = array[i]; // update the minimum if a smaller element is found
        }
    }

    printf("The smallest element in the array is: %f\n", min); // print the result
    return 0;
}