#include <stdio.h>

int main () {
  double y = 1;
  int n = 1;

  // 1e6 == 10^6
  // 解不等式可得 n <= 999
  while (n * (n+1) <= 1e6) {
    y += 1.0 / n / (n+1);
    n++;
  }

  printf("%.7lf\n", y);
  return 0;
}
