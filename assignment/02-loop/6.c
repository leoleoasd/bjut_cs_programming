#include <stdio.h>
int main () {
  int a = 0;
  int n = 0;
  int i = 0;
  int num = 0;
  int res = 0;

  scanf("%d%d", &a, &n);

  for (i = 0; i < n; i++) {
    num = num * 10 + a;
    res += num;
  }

  printf("%d\n", res);
  return 0;
}
