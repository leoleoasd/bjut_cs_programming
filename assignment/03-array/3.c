#include "common.h"

#define MAX 100

void sort(int a[], int n);
void binary_search(int a[], int n, int key);

int main () {

  int a[MAX];
  int i = 0;
  int key = 0;

  memset(a, 0, sizeof(a));
  srand((unsigned)time(NULL));

  for (i = 0; i < MAX; i++) {
    a[i] = rand() % MAX;
  }

  key = rand() % MAX;

  sort(a, MAX);

  for (i = 0; i < MAX; i++) {
    printf("%5d", a[i]);
  }
  printf("\n");

  binary_search(a, MAX, key);

  return 0;
}

void sort(int a[], int n) {
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

void binary_search(int a[], int n, int key) {
  int low = 0;
  int high = n-1;
  int mid = 0;
  int flag = 0;

  // Note 1: <=
  // eg {1 3 5}, key 5
  while (low <= high) {
    mid = (low + high) / 2;
    if (a[mid] < key) {
      // Note 2: mid+1 or mid-1 to avoid infinite loops
      // eg {1 3 5 7}, key 4
      low = mid + 1;
    } else if (a[mid] > key) {
      high = mid - 1;
    } else {
      flag = 1;
      break;
    }
  }

  if (flag) {
    low = mid;
    high = mid;

    while (low > 0) {
      if (a[low-1] == key) low--;
      else break;
    }
    while (high < n-1) {
      if (a[high+1] == key) high++;
      else break;
    }

    printf("key %d: from %d to %d.\n", key, low, high);

  } else {
    printf("Can not find.\n");
  }
}
