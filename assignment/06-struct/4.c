#include <stdio.h>

#define MAX 80
#define N 5

int delSpace (char * str) {
  int j = 0;
  int ret = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] != ' ') {
      str[j] = str[i];
      j++;
    } else {
      ret++;
    }
  }
  str[j] = '\0';
  return ret;
}

int main () {
  char test_set[N][MAX] = {
    "a a a ",
    "a     ",
    "      ",
    "aaaaaa",
    "  aa  "
  };

  for (int i = 0; i < N; i++) {
    printf("test case %d: \"%s\"\n", i, test_set[i]);
    int space = delSpace(test_set[i]);
    printf("     result: \"%s\", space: %d\n", test_set[i], space);
  }

  return 0;
}
