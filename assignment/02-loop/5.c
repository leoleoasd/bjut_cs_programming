#include <stdio.h>

int main () {
  double result = 0;
  int i = 0;
  for (i = 1; i < 100; i+=2) {
    result += i * (i+1) * (i+2);
  }
  printf("%.0lf\n", result);
  return 0;
}
