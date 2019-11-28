#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define N 100

void getPart(double src[], double result[], int n, double x1, double x2, int * p) {
  for (int i = 0; i < n; i++) {
    if (src[i] > x2 && src[i] < x1) {
      result[*p] = src[i];
      (*p)++;
    }
  }
}

int main () {
  srand((unsigned)time(NULL));
  double src[N] = {0};
  double result[N] = {0};

  for (int i = 0; i < N; i++) {
    src[i] = rand()*1.0/(rand()+1);
  }
  double x2 = rand()*1.0/(rand()+1);
  double x1 = rand()*1.0/(rand()+1) + x2;
  int p = 0;

  getPart(src, result, N, x1, x2, &p);

  printf(">x2(%.2f) and <x1(%.2f)\n", x2, x1);

  for (int i = 0; i < p; i++) {
    printf("%d: %.2f\n", i, result[i]);
  }
  return 0;
}
