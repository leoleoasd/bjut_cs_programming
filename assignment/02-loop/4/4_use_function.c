#include <stdio.h>
// function pow(x, y) will return the value of x^y in double
// which is in math.h
#include <math.h>

int judge(int);

int main () {
  int i = 0;
  for (i = 100; i < 1000; i++) if (judge(i)) printf("%d\n", i);
}

int judge (int n) {
  if((int)(pow(n/100, 3) + pow(n/10%10, 3) + pow(n%10, 3) == n)) return 1;
  return 0;
}
