#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 10

int findMaxValue(int array[], int length);
int findMaxIndex(int array[], int length);

int main () {
  int a[L] = {0};
  int i = 0;

  srand((unsigned)time(NULL));

  printf("raw data:\n");
  for (i = 0; i < L; i++) {
    a[i] = rand() % 100;
    printf("%3d", a[i]);
  }
  printf("\n");

  printf("Max data:\n");
  printf("value: %3d\n", findMaxValue(a, L));
  printf("index: %3d\n", findMaxIndex(a, L));

  return 0;
}

int findMaxValue(int array[], int length) {
  int max = array[0];
  int i = 1;
  for (i = 1; i < length; i++) {
    if (array[i] > max) max = array[i];
  }
  return max;
}

int findMaxIndex(int array[], int length) {
  int max = 0;
  int i = 1;
  for (i = 1; i < length; i++) {
    if (array[i] > array[max]) max = i;
  }
  return max;
}
