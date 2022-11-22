#include <stdio.h>

int main() {
  int arr[100], size;

  printf("Enter length of the array : \t");
  scanf("%d", &size);

  printf("Enter list of elements \n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        // temp store the first el
        int firstEl = arr[j];
        // second el to first position
        arr[j] = arr[j + 1];
        // first el to second position
        arr[j + 1] = firstEl;
      }
    }
  }

  printf("Sorted array is: \n");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}
