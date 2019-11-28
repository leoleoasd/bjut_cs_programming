#include <stdio.h>

int main () {
  int n = 0;
  int num = 1;
  scanf("%d", &n);

  while (n--) {
    num = (num + 1) * 2;
  }

  printf("%d\n", num);
  return 0;
}
