#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main () {

  int key = 0;
  int num[MAX];
  int i = 0;

  memset(num, 0, sizeof(num));
  srand((unsigned)time(NULL));

  key = rand() % 10;
  printf("key is: %d\n", key);

  printf("raw data:\n");
  for (i = 0; i < MAX; i++) {
    num[i] = rand() % 10;
    printf("%3d", num[i]);
    if (!((i+1)%10)) printf("\n");
  }

  printf("result:\n");
  for (i = 0; i < MAX; i++) {
    if (num[i] == key) printf("%3d", i);
  }

  return 0;
}
