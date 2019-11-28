#include <stdio.h>

int is_prime(int);

int main() {
  int n = 0;
  scanf("%d", &n);

  if (is_prime(n)) printf("YES\n");
  else             printf("NO\n");

  return 0;
}

int is_prime(int num) {
  for (int i = 2; i * i <= num; i++) {
    if (!(num % i)) return 0;
  }
  return num != 1;
}
