#include <stdio.h>

int f[10005] = {0, 3, 6, 1, 4};

int min (int a, int b, int c) {
  int ret = (a < b) ? a : b;
  ret = (ret < c) ? ret : c;
  return ret;
}

int main() {
  for (int i = 5; i < 10005; i++) {
    f[i] = min(f[i-5] + 1, f[i-3] + 1, f[i-1] + 3);
  }

  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", f[n]);
  }

  return 0;
}
