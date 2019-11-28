#include <stdio.h>

#define MAX 100

int main () {
  char str[MAX] = {0};
  char sharp[MAX*2] = {0};
  int i = 0;
  int j = 0;

  gets(str);
  for (i = 0; str[i]; i++) {
    sharp[2*i] = str[i];
    if (str[i+1]) sharp[2*i+1] = '#';
  }
  puts(sharp);

  for (i = 0; sharp[i]; i++) {
    if (i%2 == 0) {
      sharp[j] = sharp[i];
      j++;
    }
  }
  sharp[j] = '\0';
  puts(sharp);

  return 0;
}
