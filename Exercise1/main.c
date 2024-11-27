#include <stdio.h>
#include <stdlib.h>

int findLargest(int* arr, int size);

int main(void) {
  int size, i;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int* arr = (int*)malloc(size * sizeof(int));
  for (i = 0; i < size; i++) {
      printf("Enter the value for arr[%d]: ", i);
      scanf("%d", &arr[i]);
  }
  printf("The largest element in the array is: %d\n", findLargest(arr, size));
}

int findLargest(int* arr, int size) {
  if (size == 1) return arr[0];
  int largest = findLargest(arr, size - 1);
  return arr[size - 1] > largest ? arr[size - 1] : largest;
}