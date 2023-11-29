// This program inputs two matrices from the user and prints a new matrix which
// stores the sum of the two inputted matrices.
#include <stdio.h>

void acceptMat(int rows, int columns, int arr[][columns]) {
  /* function to accept elements into a matrix
  @rows : number of rows
  @columns : number of columns
  @arr[][] : the array into which elements are accepted
  @returns: nothing
  */
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
}

void sumMat(int rows, int columns, int arr1[][columns], int arr2[][columns],
            int sum[][columns]) {
  /* function to add two matrices
  @rows : number of rows
  @columns : number of columns
  @arr1[][] : Matrix 1 which is to be added to matrix 1
  @arr2[][]: Matrix 2 which is to be added to matrix 1
  @returns: nothing

  */
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      sum[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
}

void printMat(int rows, int columns, int arr[][columns]) {
  /* function to print two matrices
  @rows : number of rows
  @columns : number of columns
  @arr[][] : The matrix which has be printed
  @returns: nothing

  */
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      printf("%d ", arr[i][j]);
      if (j == columns - 1) {
        printf("\n");
      }
    }
  }
}

int main() {
  /*
  Function which accepts the number of rows the number of columns and calls all
  the functions to so that the sum of 2 matrices is found

  Important Variables:
  @rows : the number of rows in the matrix
  @colums : the number of columns in the marix
  @arr1[][]: The first matrix
  @arr2[][]: the second the matrix
  @sum[][]: stores the sum of 2 matrices

  @returns: 0 if the program reaches the end
  */
  int rows, columns;
  printf("Please enter the number of rows:");
  scanf("%d", &rows);
  printf("Please enter the number of columns: ");
  scanf("%d", &columns);

  int arr1[100][100], arr2[100][100], sum[100][100];

  printf("Enter Matrix A\n");
  acceptMat(rows, columns, arr1);
  printf("Enter Matrix B\n");
  acceptMat(rows, columns, arr2);
  sumMat(rows, columns, arr1, arr2, sum);
  printf("A+B=\n");
  printMat(rows, columns, sum);

  return 0;
}