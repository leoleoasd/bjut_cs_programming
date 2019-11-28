#include <stdio.h>
#include <stdlib.h>

typedef struct n {
  int data;
  struct n * next;
}node;

node * create(int data) {
  node * h = (node *)malloc(sizeof(node));
  h->data = data;
  h->next = NULL;
  return h;
}

void add(node * head, int data) {
  node * add = (node *)malloc(sizeof(node));
  add->data = data;
  add->next = NULL;

  while (head->next != NULL) {
    head = head->next;
  }
  head->next = add;
}

void output(node * head) {
  if (head == NULL) printf("empty");
  while (head != NULL) {
    printf("%3d", head->data);
    head = head->next;
  }
  printf("\n");
}

void free_ll(node * head) {
  node * temp = NULL;
  while (head != NULL) {
    temp = head;
    head = head->next;
    free(temp);
  }
}

node * del(node * head, int key) {
  node * follow = NULL;
  node * ret = head;
  while (head != NULL) {
    if (head->data == key) {
      if (follow != NULL) {
        follow->next = head->next;
        free(head);
        head = follow->next;
      } else {
        ret = head->next;
        free(head);
        head = ret;
      }
    } else {
      follow = head;
      head = head->next;
    }
  }
  return ret;
}

void change(node * head, int key, int data) {
  while (head != NULL) {
    if (head->data == key) {
      head->data = data;
    }
    head = head->next;
  }
}

int main() {
  node * L1_head = create(0);
  add(L1_head, 1);
  add(L1_head, 1);
  output(L1_head);

  add(L1_head, 2);
  output(L1_head);


  L1_head = del(L1_head, 1);
  output(L1_head);

  change(L1_head, 2, 0);
  output(L1_head);

  L1_head = del(L1_head, 0);
  output(L1_head);

  return 0;
}
