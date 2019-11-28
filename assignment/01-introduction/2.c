#include <stdio.h>

int main () {

  // use 1, 2, 3, 4 to represent the good man
  for (int good_man = 1; good_man <= 4; good_man++) {

    int honest_people = 0;

    // the next line means:
    // if A is not the good man then A is an honest man.
    // so in that situation honest_people need to increase
    if (good_man != 1) honest_people++;

    // the next line means:
    // if C is the good man then B told the truth.
    // so in that situation honest_people need to increase
    if (good_man == 3) honest_people++;

    // when C told the truth
    if (good_man == 4) honest_people++;

    // when D told the truth
    if (good_man != 4) honest_people++;

    // when A, B, C, D have 3 honest people
    // we find the honest people who matched the condition
    if (honest_people == 3) printf("%c\n", 'A' - 1 + good_man);
  }

  return 0;
}
