#include <stdio.h>

int main () {
  int n = 0;
  while (++n) {
    if (n % 5 == 1 && n % 6 == 5 && n % 7 == 4 && n % 11 == 10) {
      printf("%d\n", n);
      break;
    }
  }
  return 0;
}
