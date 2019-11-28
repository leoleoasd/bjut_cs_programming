#include <stdio.h>
#include <time.h>

int main () {
  // clock_t ms
  int start = time(NULL);

  while (1) {
    int current = time(NULL);
    if (current - start > 2) {
      printf("2s later\n");
      start = time(NULL);
    }
  }
  return 0;
}
