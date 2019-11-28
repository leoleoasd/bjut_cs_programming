#include <memory.h> // memset
#include <stdio.h>  // printf, scanf
#include <stdlib.h> // srand, rand
#include <time.h>   // time

#define MAX 12

int main () {
  int result[MAX];
  int num = 0;
  int t = 120;

  memset(result, 0, sizeof(result));
  srand((unsigned)time(NULL));

  while (t--) {
    result[rand()%12]++;
  }

  for (t = 0; t < MAX; t++) {
    printf("%3d", t+1);
  }
  printf("\n");

  for (t = 0; t < MAX; t++) {
    printf("%3d", result[t]);
  }
  printf("\n");

  return 0;
}
