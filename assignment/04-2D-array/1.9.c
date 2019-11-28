#include <stdio.h>
#define MAX 6

int main () {
  int a[MAX][MAX];
  int i = 0;
  int j = 0;
  int temp = 0;

  for (i = 0; i < MAX; i++) {
    for (j = 0; j < MAX; j++) {
      temp = (i-j) * (i-j);
      if (!temp) a[i][j] = 1;
      else if (temp == 1) a[i][j] = 2;
      else if (temp == 4) a[i][j] = 3;
      else a[i][j] = 0;
      printf("%3d", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
