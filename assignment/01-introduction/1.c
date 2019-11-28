#include <stdio.h>

int main () {
  int num = 0;
  scanf("%d", &num);

  int a = num / 100 % 10 + 1;
  int b = num / 10 % 10 + 1;
  int c = num % 10 + 1;

  int new_num = a % 10 * 100 + b % 10 * 10 + c % 10;

  printf("%03d %06.2f\n", new_num, (float)new_num);

  return 0;
}
