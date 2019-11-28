#include <stdio.h>

void sln (int m, int n) {
  int a = 0;
  int b = 0;
  int c = 0;
  int result_a = 0;
  int result_b = 0;
  int result_c = 0;
  int min_diff = 10000;
  int diff = 0;

  for (b = m / 3; b >= 0; b--) {
    for (a = 0; a <= m / 5; a++) {
      int remaining_money = m - b * 3 - a * 5;
      if (remaining_money >= 0) {
        c = remaining_money * 3;
        if (a + b + c == n) {
          printf("%d %d %d\n", a, b, c);
          return;
        } else {
          diff = (a+b+c > n) ? a+b+c-n : n-a-b-c;
          if (diff < min_diff) {
            min_diff = diff;
            result_a = a;
            result_b = b;
            result_c = c;
          } else if (diff == min_diff) {
            if (a+b+c > result_a + result_b + result_c) {
              result_a = a;
              result_b = b;
              result_c = c;
            }
          }
        }
      }
    }
  }
  printf("%d %d %d\n", result_a, result_b, result_c);
  return;
}

int main () {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    sln(a, b);
  }
  return 0;
}
