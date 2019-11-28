#include <stdio.h>
#define PI 3.14159

int main(int argc, char const *argv[]) {
  /* code */
  double r = 0;

  scanf("%lf", &r);

  printf("%.2lf\n", r * r * PI);

  return 0;
}
