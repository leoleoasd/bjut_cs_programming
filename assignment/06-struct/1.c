#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 80
#define N 100

#define MIN 300

typedef struct staff{
  int id;
  double salary;
  char name[MAX];
}Staff;

void random_name(char * name, int length) {
  name[length] = 0;
  for (int i = 0; i < length; i++) {
    name[i] = rand()%26 + 'a';
  }
}

void initial(Staff * s, int n) {
  for (int i = 0; i < n; i++) {
    s[i].id = i+1;
    s[i].salary = rand()%401 + 100;
    random_name(s[i].name, 5);
  }
}

void output(Staff * s, int n) {
  for (int i = 0; i < n; i++) {
    if (s[i].salary < MIN) {
      printf("%03d\t%s\t%.2f\n", s[i].id, s[i].name, s[i].salary);
    }
  }
}

int main () {
  srand((unsigned)time(NULL));

  Staff s[N];
  initial(s, N);

  output(s, N);

  return 0;
}
