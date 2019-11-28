#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 5
#define MAX 80

int lookup(char * src[], int n, char * tag[]) {
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (strncmp(src[i], "Jacob ", sizeof(char) * strlen("Jacob ")) == 0) {
      strcpy(tag[j], src[i]);
      j++;
    }
  }
  return j;
}

int main () {
  char * src[N] = {NULL};
  char * tag[N] = {NULL};
  char test_set[N][MAX] = {
    "Jacob Woody",
    "Jacobary Woody",
    "Oliver Woody",
    "Jacob Varco",
    "Thomas Hitchins"
  };

  for (int i = 0; i < N; i++) {
    src[i] = (char *)malloc(sizeof(char) * MAX);
    tag[i] = (char *)malloc(sizeof(char) * MAX);
    strcpy(src[i], test_set[i]);
  }

  int amount = lookup(src, N, tag);

  for (int i = 0; i < amount; i++) {
    printf("%02d: %s\n", i, tag[i]);
  }

  for (int i = 0; i < N; i++) {
    free(src[i]);
    free(tag[i]);
  }

  return 0;
}
