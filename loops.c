#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long calculateFactorial(int n) {
    unsigned long long factorial = 1;

    // Using a loop to calculate the factorial
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int num;

    // Getting input from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the input is non-negative
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        // Calculate and display the factorial
        unsigned long long result = calculateFactorial(num);
        printf("The factorial of %d is %llu\n", num, result);
    }

    return 0;
}
