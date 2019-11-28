#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define N 10

void Computing (double src[], int n, double tag[], int * pmax, int * pmin) {
  *pmin = 0;
  *pmax = 0;
  for (int i = 0; i < n; i++) {
    tag[i] = sqrt(src[i]);
    if (src[i] > src[*pmax]) *pmax = i;
    if (src[i] < src[*pmin]) *pmin = i;
  }
}

int main () {
  srand((unsigned)time(NULL));

  double src[N] = {0};
  double tag[N] = {0};

  for (int i = 0; i < N; i++) {
    src[i] = rand()*1.0/(rand()+1);
  }
  int max_p = 0;
  int min_p = 0;

  Computing(src, N, tag, &max_p, &min_p);

  for (int i = 0; i < N; i++) {
    printf("%02d: src: %.2lf, tag: %.2lf\n", i, src[i], tag[i]);
  }

  printf("max_p: %d max value: %.2f\n", max_p, src[max_p]);
  printf("min_p: %d min value: %.2f\n", min_p, src[min_p]);
  return 0;
}
