#include <stdio.h>
int main () {
  int i = 0;
  int a = 0;
  int b = 0;
  int c = 0;

  for (i = 100; i < 1000; i++) {
    a = i / 100;
    b = i / 10 % 10;
    c = i % 10;
    if (a*a*a + b*b*b + c*c*c == i) printf("%d\n", i);
  }
  return 0;
}
