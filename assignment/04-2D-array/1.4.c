#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  int a = 0;
  int t = 100;
  srand((unsigned)time(NULL));
  while (t--) {
    a = rand()%1000;
    if (a%2) printf("%5d", -a);
    else printf("%5d", a);
    if (!(t%5)) printf("\n");
  }
  return 0;
}
