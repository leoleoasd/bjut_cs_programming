#include "common.h"

#define MAX 30

int main () {

  int score[MAX];
  int i = 0;
  int flag = 1;

  memset(score, 0, sizeof(score));

  srand((unsigned)time(NULL));

  while (flag) {
    for (i = 0; i < MAX; i++) {
      score[i] = rand()%101;
      if (score[i] < 60) {
        flag = 0;
        printf("%3d", i);
      }
    }
  }

  return 0;
}
