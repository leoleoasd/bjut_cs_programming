// output all the longest word(s) in the line
#include <memory.h>
#include <stdio.h>
#include <string.h>

#define MAX 10005

void print_sub(char str[], int begin, int length) {
  int i = 0;
  printf("in %d: ", begin);
  for (i = 0; i < length; i++) {
    printf("%c", str[i+begin]);
  }
  printf("\n");
}

int main () {

  char str[MAX];
  int place[MAX];
  int i = 0;
  int max = 0;
  int length = 0;
  int head = 0;
  int num = 0;

  memset(str, 0, sizeof(str));
  memset(place, 0, sizeof(place));

  gets(str);

  for (; str[i]; i++) {
    if (str[i] == ' ') {
      if (length > max) {
        max = length;
        num = 0;
        place[num] = i - length;
        num++;
      } else if (length == max) {
        place[num] = i - length;
        num++;
      }
      length = 0;
    } else length++;
  }

  printf("the longest word(s) in the line:\n");
  printf("length: %d\n", max);
  for (i = 0; i < num; i++) print_sub(str, place[i], max);

  return 0;
}
