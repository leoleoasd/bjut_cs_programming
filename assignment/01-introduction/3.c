#include <stdio.h>

int main () {

  int a = 0;
  int b = 0;
  char op = 0;

  scanf("%d%c%d", &a, &op, &b);

  if (op == '+') printf("%d + %d = %d\n", a, b, a + b);
  if (op == '-') printf("%d - %d = %d\n", a, b, a - b);

  // question: how to solve the overflow?
  if (op == '*') printf("%d * %d = %lld\n", a, b, (long long)a * (long long)b);

  if (op == '/') {
    // Tips: your code need to solve the typical exception
    if (b == 0) printf("error: can not divide 0!\n");
    else printf("%d / %d = %.2lf\n", a, b, a * 1.0 / b);
  }

  return 0;
}
