#include <stdio.h>  // printf(), scanf()
#include <stdlib.h> // srand(), rand()
#include <time.h>   // time()

#define MAX 100

int main () {

  int t = MAX;
  int a = 0;
  int sum = 0;

  srand((unsigned)time(NULL));

  while (t--) {
    a = rand()%101;
    if (a < 50 && (!(a%2)) ) sum++;
  }

  printf("%d\n", sum);

  return 0;
}
