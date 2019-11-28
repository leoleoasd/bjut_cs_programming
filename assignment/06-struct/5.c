#include <stdio.h>

#define MAX 80
#define N 5

void divString (char * str, char * dst) {
  int j = 0;
  int k = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      dst[j] = str[i];
      j++;
    } else {
      str[k] = str[i];
      k++;
    }
  }
  dst[j] = '\0';
  str[k] = '\0';
}

int main () {
  char test_set[N][MAX] = {
    "aAbBcC",
    "abcdef",
    "ABCDEF",
    "ABabCD",
    "abABcd"
  };

  for (int i = 0; i < N; i++) {
    printf("test case %d: \"%s\"\n", i, test_set[i]);
    char dst[MAX] = {0};
    divString(test_set[i], dst);
    printf("src: \"%s\", dst: \"%s\"\n", test_set[i], dst);
  }

  return 0;
}
