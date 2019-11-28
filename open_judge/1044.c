#include <stdio.h>

void sln (int n) {
  printf("%d %d %d\n", n / 5, n % 5 / 3, n % 5 % 3 * 3);
}

int main () {
  for (int i = 0; i < 100; i++) sln(i);
  return 0;
}
