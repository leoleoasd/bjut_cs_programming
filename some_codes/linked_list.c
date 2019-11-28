#include <stdio.h>
#include <stdlib.h>

typedef struct n {
  int data;
  struct n * next;
}node;

node * create() {
  node * h = (node *)malloc(sizeof(node));
  h->data = 0;
  h->next = NULL;
  return h;
}

void add(node * n, int data) {
  while (n->next != NULL) {
    n = n->next;
  }
  n->next = (node *)malloc(sizeof(node));
  n->next->data = data;
  n->next->next = NULL;
}

void delete(node * n) {
  node * temp = NULL;
  while (n != NULL) {
    temp = n->next;
    free(n);
    n = temp;
  }
}

void print(node * n) {
  while (n != NULL) {
    printf("%3d", n->data);
    n = n->next;
  }
  printf("\n");
}

int main () {
  node l1;
  l1.data = 0;
  l1.next = NULL;
  add(&l1, 1);

  print(&l1);

  node * l2 = create();

  add(l2, 2);

  print(l2);

  // delete(&l1);
  delete(l2);


  return 0;
}
