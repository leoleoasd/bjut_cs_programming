#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 10

int find(int key, int length, int array[]);

int main () {
  int a[L] = {0};
  int i = 0;
  int key = 0;

  srand((unsigned)time(NULL));
  key = rand() % 5;

  printf("raw data:\n");
  for (i = 0; i < L; i++) {
    a[i] = rand() % 5;
    printf("%3d", a[i]);
  }
  printf("\n");

  printf("key: %5d\n", key);
  printf("index: %3d\n", find(key, L, a));

  return 0;
}

int find(int key, int length, int array[]) {
  int i = 0;
  for (i = 0; i < length; i++) {
    if (array[i] == key) return i;
  }
  return -1;
}
