#include <stdio.h>

int main () {
  int i = 0;
  int n = 0;

  scanf("%d", &n);

  // 和找质数一样，从 1 找到 根号 n
  // 就可以找到 n 的一半的较小的因子
  for (i = 1; i*i < n; i++) {
    if (!(n % i)) printf("%d\n", i);
  }

  // 再从 i*i >= n 的位置往回找，
  // 通过 n/i，就能得到剩下的那一半的较大的因子
  for (; i > 0; i--) {
    if (!(n % i)) printf("%d\n", n/i);
  }

  return 0;
}
