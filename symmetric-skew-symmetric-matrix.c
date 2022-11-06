#include <stdio.h>

int main() {
  int row, col, i, j, mx[50][50], mxT[50][50];

  printf("Enter the size of the matrix (row x col) \t");
  scanf("%d", &row);
  col = row;

  // take elements of the matrix as input
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("Enter element for %d x %d \t", i + 1, j + 1);
      scanf("%d", &mx[i][j]);
    }
  }

  // output the matrix
  printf("The matrix is : \n");
  for (i = 0; i < row; i++) {
    printf("\n");
    for (j = 0; j < col; j++) {
      printf("%d \t", mx[i][j]);
    }
  }
  printf("\n");

  // create the transpose of matrix
  for (i = 0; i < col; i++) {
    for (j = 0; j < row; j++) {
      mxT[i][j] = mx[j][i];
    }
  }

  printf("\n");

  // find whether the matrix is symmetric or skew symmetric
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      if (mx[i][j] != mxT[i][j]) {
        printf("The matrix is skew symmetric \n");
        return 0;
      }
    }
  }

  printf("The matrix is symmetric \n");
  return 0;
}
