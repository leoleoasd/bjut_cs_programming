// This question requires you to specify a way
// to enter two poker cards.
// Ref:
// ♥️: H-Heart
// ♠️: S-Spade
// ♦️: D-Diamond
// ♣️: C-Club
// so you can define that H means "♥️" and so on

#include <stdio.h>

int main () {
  printf("Please input two poker cards you want: \n");
  printf("In this program, H means heart, S means spade,\n");
  printf("D means diamond and C means club.\n");
  printf("1 means A, 11 means J, 12 means Q and 13 means K\n");
  printf("For example, if you want Heart A and Spade A,\n");
  printf("you can input them as: H1 S1\n");

  char type_1 = 0;
  int num_1 = 0;
  char type_2 = 0;
  int num_2 = 0;

  scanf("%c%d %c%d", &type_1, &num_1, &type_2, &num_2);

  int err_code = 0;


  if (type_1 != 'H' && type_1 != 'S' && type_1 != 'D' && type_1 != 'C') {
    // if the first card is not poker card
    err_code = 3;
  } else if (type_2 != 'H' && type_2 != 'S' && type_2 != 'D' && type_2 != 'C') {
    // if the second card is not poker card
    err_code = 3;
  } else if (num_1 < 1 || num_1 > 13) {
    // if the first card is not poker card
    err_code = 3;
  } else if (num_2 < 1 || num_2 > 13) {
    // if the second card is not poker card
    err_code = 3;
  } else if (type_1 == type_2 && num_1 == num_2) {
    // same card error
    err_code = 1;
  } else if (type_1 == 'H' && num_1 == 1 && type_2 == 'S' && num_2 == 1) {
    // ♥️A and ♠️A
    printf("Flower!\n");
  } else if (type_1 == 'S' && num_1 == 1 && type_2 == 'H' && num_2 == 1) {
    // ♠️A and ♥️A
    printf("Flower!\n");
  } else if (type_1 == 'D' && type_2 == 'D') {
    if (num_1 == 11 || num_1 == 12 || num_1 == 13 || num_1 == 1) {
      if (num_2 == 11 || num_2 == 12 || num_2 == 13 || num_2 == 1) {
        printf("Good wine!\n");
      } else err_code = 2;
    } else err_code = 2;
  } else if (type_1 == 'C' && type_2 == 'C') {
    if (2 <= num_1 && num_1 <= 10) {
      if (2 <= num_2 && num_2 <= 10) {
        printf("Rabbit!\n");
      } else err_code = 2;
    } else err_code = 2;
  } else err_code = 2;

  if (err_code == 1) printf("Illegal input! You can not input two same cards.\n");
  else if (err_code == 2) printf("Nothing.\n");
  else if (err_code == 3) printf("Illegal input!\n");
  return 0;
}
