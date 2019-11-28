#include <memory.h>
#include <stdio.h>

#define MAX 5

int main () {
  int a[MAX][MAX];
  int b[MAX][MAX];
  int i = 0;
  int j = 0;
  int min = 0;
  int max = 0;

  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));

  for (i = 0; i < MAX; i++) {
    for (j = 0; j < MAX; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  for (i = 0; i < MAX; i++) {
    min = a[i][0];
    for (j = 1; j < MAX; j++) {
      if (a[i][j] < min) min = a[i][j];
    }
    for (j = 0; j < MAX; j++) {
      if (a[i][j] == min) b[i][j]++;
    }
  }

  for (j = 0; j < MAX; j++) {
    max = a[0][j];
    for (i = 1; i < MAX; i++) {
      if (a[i][j] > max) max = a[i][j];
    }
    for (i = 0; i < MAX; i++) {
      if (a[i][j] == max) b[i][j]++;
    }
  }

  for (i = 0; i < MAX; i++) {
    for (j = 0; j < MAX; j++) {
      if (b[i][j] == 2) printf("Line %d, Column%d\n", i, j);
    }
  }
  return 0;
}
