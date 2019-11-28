#include <stdio.h>
#include <stdlib.h>

#define N 80

void func(char str[]) {
  int i = 0;
  // while (str[i] != '\0') {
  //   i++;
  // }

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 'a' + 'A';
    }
  }
}

int main () {
  char str[N] = {0};
  FILE * fp = fopen("text.txt", "w");

  scanf("%s", str);

  func(str);

  fprintf(fp, "%s", str);
  fclose(fp);

  fp = fopen("text.txt", "r");

  fscanf(fp, "%s", str);
  puts(str);

  fclose(fp);

  return 0;
}
