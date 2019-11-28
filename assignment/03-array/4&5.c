#include "common.h"

#define MAX 100

void print_array(int a[], int n, int col, int blank);
void insert_sort(int a[], int n);
void bubble_sort(int a[], int n);


int main () {

  int a[MAX];
  int i = 0;
  int key = 0;

  memset(a, 0, sizeof(a));
  srand((unsigned)time(NULL));

  for (i = 0; i < MAX; i++) {
    a[i] = rand() % MAX;
  }

  insert_sort(a, MAX);

  printf("insert_sort\n");
  print_array(a, MAX, 10, 3);

  bubble_sort(a, MAX);

  printf("bubble_sort\n");
  print_array(a, MAX, 10, 3);

  return 0;
}

void print_array(int a[], int n, int col, int blank) {
  int i = 0;
  for (i = 0; i < n; i++) {
    printf("%*d", blank, a[i]);
    if ((i+1)%col);
    else printf("\n");
  }
}

void insert_sort(int a[], int n) {
  int i = 0;
  int j = 0;
  int min_pos = 0;
  int temp = 0;

  for (i = 0; i < n-1; i++) {
    min_pos = i;
    for (j = i+1; j < n; j++) {
      if (a[j] < a[min_pos]) min_pos = j;
    }
    if (min_pos != i) {
      temp = a[i];
      a[i] = a[min_pos];
      a[min_pos] = temp;
    }
  }
}

void bubble_sort(int a[], int n) {
  int i = 0;
  int j = 0;
  int temp = 0;

  for (i = 0; i < n; i++) {
    for (j = n-1; j > i; j--) {
      if (a[j] > a[j-1]) {
        temp = a[j-1];
        a[j-1] = a[j];
        a[j] = temp;
      }
    }
  }
}
