#include <memory.h>
#include <stdio.h>

#define MAX 10000

int main () {

  char str[MAX];
  int i = 0;

  memset(str, 0, sizeof(str));

  gets(str);
  while (str[i]) {
    str[i]++;
    i++;
  }
  printf("Encode:\n");
  puts(str);

  i = 0;
  while (str[i]) {
    str[i]--;
    i++;
  }
  printf("Decode:\n");
  puts(str);

  return 0;
}
