#include<stdio.h>
#include <stdlib.h>

// A function to allocate memory for a matrix of size n x n
int **create_matrix(int n) {
  int **matrix = (int **)malloc(n * sizeof(int *));
  for (int i = 0; i < n; i++) {
    matrix[i] = (int *)malloc(n * sizeof(int));
  }
  return matrix;
}

void free_matrix(int **matrix, int n) {
  for (int i = 0; i < n; i++) {
    free(matrix[i]);
  }
  free(matrix);
}

// A function to input a matrix of size n x n from the user
void input_matrix(int **matrix, int n) {
  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
}

// A function to display a matrix of size n x n
void display_matrix(int **matrix, int n) {
  printf("The matrix is:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

// A function to multiply two matrices of size n x n and store the result in another matrix
void multiply_matrix(int **matrix1, int **matrix2, int **result, int n) {
  // Initialize the result matrix to zero
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      result[i][j] = 0;
    }
  }
  // Perform the matrix multiplication
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        result[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }
}


int main() {
  int n; // The order of the matrices
  int **matrix1, **matrix2, **result; // The matrices

  // Input the order of the matrices
  printf("Enter the order of the matrices: ");
  scanf("%d", &n);

  
  matrix1 = create_matrix(n);
  matrix2 = create_matrix(n);
  result = create_matrix(n);

  // Input the first matrix
  printf("Enter the first matrix:\n");
  input_matrix(matrix1, n);

  // Input the second matrix
  printf("Enter the second matrix:\n");
  input_matrix(matrix2, n);

  // Multiply the matrices and store the result
  multiply_matrix(matrix1, matrix2, result, n);

  // Display the result matrix
  printf("The multiplication of the two matrices is:\n");
  display_matrix(result, n);

  
  free_matrix(matrix1, n);
  free_matrix(matrix2, n);
  free_matrix(result, n);

  return 0;
}