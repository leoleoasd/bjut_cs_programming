#include <stdio.h>

int a[100];

void sln(int m, int n) {
  while (n--) {
    for (int i = 0; i < m - 1; i++) {
      if (a[i] > a[i+1]) {
        int t = a[i];
        a[i] = a[i+1];
        a[i+1] = t;
      }
    }
  }
  printf("%d", a[0]);
  int flag = 1;
  for (int i = 1; i < m; i++) {
    printf(" %d", a[i]);
    if (a[i] < a[i-1]) flag = 0;
  }
  if (flag) printf("\nYES\n");
  else printf("\nNO\n");
  return;
}

int main(int argc, char const *argv[])
{
  /* code */
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int m = 0;
    int n = 0;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
      scanf("%d", &a[i]);
    }
    sln(m, n);
  }
  return 0;
}
