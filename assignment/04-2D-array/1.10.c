#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define S 35 // S means students number
#define C 4  // C means courses number

void swap(int a[][C+2], int x, int y) {
  int temp = 0;
  int i = 0;
  for (i = 0; i < C+2; i++) {
    temp = a[x][i];
    a[x][i] = a[y][i];
    a[y][i] = temp;
  }
}

int main () {
  int a[S][C+2];
  int i = 0;
  int j = 0;
  int max_p = 0;

  memset(a, 0, sizeof(a));
  srand((unsigned)time(NULL));

  // use the index of the first time as Student ID,
  //   save in column 0
  // save the sum. score in the column 1
  for (i = 0; i < S; i++) {
    a[i][0] = i;
    for (j = 2; j < C+2; j++) {
      a[i][j] = rand()%101;
      a[i][1] += a[i][j];
    }
  }

  // sort by avg. score equals sort by sum. score

  for (i = 0; i < S-1; i++) {
    max_p = i;
    for (j = i+1; j < S; j++) {
      if (a[j][1] > a[max_p][1]) max_p = j;
    }
    if (max_p != i) swap(a, i, max_p);
  }

  printf("rank|id  |sum |c0  |c1  |c2  |c3  |avg   \n");
  printf("-----------------------------------------\n");
  for (i = 0; i < S; i++) {
    printf("%4d|", i+1);
    for (j = 0; j < C+2; j++) {
      printf("%4d|", a[i][j]);
    }
    printf("%6.2f\n", a[i][1]*1.0/C);
  }

  return 0;
}
