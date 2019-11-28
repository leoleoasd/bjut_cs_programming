#include <stdio.h>
#include <math.h>

void print_blank(int, int, char);

int main() {
  int n = 0;
  char ch = 0;
  int h = 0;
  scanf("%d %c", &n, &ch);

  h = (int)sqrt((n + 1) * 1.0 / 2);

  int i = 0;
  for (i = 0; i < h - 1; i++) {
    print_blank(i, h * 2 - 1, ch);
  }

  print_blank(i--, h * 2 - 1, ch);

  for (; i >= 0; i--) {
    print_blank(i, h * 2 - 1, ch);
  }

  printf("%d", n - h * h * 2 + 1);
  return 0;
}

void print_blank(int count, int column, char ch) {
  for (int i = 0; i < count; i++) printf(" ");
  for (int i = 0; i < column - count * 2; i++) printf("%c", ch);
  for (int i = 0; i < count; i++) printf(" ");
  printf("\n");
}
