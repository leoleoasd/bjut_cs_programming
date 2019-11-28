// output the first longest word in the line

#include <memory.h>
#include <stdio.h>
#include <string.h>

#define MAX 10005

// print a sub string of str, from begin to begin+length-1
void print_sub(char str[], int begin, int length) {
  int i = 0;
  for (i = 0; i < length; i++) {
    printf("%c", str[i+begin]);
  }
  printf("\n");
}

int main () {

  char str[MAX];
  int i = 0;
  int max = 0;
  int length = 0;
  int head = 0;

  memset(str, 0, sizeof(str));

  gets(str);

  for (; str[i]; i++) {
    if (str[i] == ' ') {
      if (length > max) {
        max = length;
        head = i - length;
      }
      length = 0;
    } else length++;
  }

  print_sub(str, head, max);

  return 0;
}
