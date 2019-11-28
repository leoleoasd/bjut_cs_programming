#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct n{
  int data;
  struct n * next;
}node;

node * create(int data) {
  node * a = malloc(sizeof(node));
  a->data = data;
  a->next = NULL;
  return a;
}

node * add(node * head, int data, int method) {
  node * ret = head;
  // create a node for add
  node * a = create(data);

  if (method == 0) {
  // head add
    a->next = head;
    ret = a;
  } else if (method == 1) {
  // tail add
    while (head->next != NULL) {
      head = head->next;
    }
    head->next = a;
  }
  return ret;
}

void print(node * head) {
  while (head != NULL) {
    printf("%3d", head->data);
    head = head->next;
  }
  printf("\n");
}

void delete(node * head) {
  while (head != NULL) {
    node * temp = head;
    head = head->next;
    free(temp);
  }
}

node * insert(node * head, int position, int method, int data) {
  // create a node for insert
  node * i = create(data);
  node * temp = head;

  // insert before p equals insert after p-1
  if (method == 1) position -= 1;

  if (position == 0) {
    i->next = head;
    return i;
  } else {
    for (int j = 1; j < position; j++) {
      temp = temp->next;
    }
    i->next = temp->next;
    temp->next = i;
  }
  return head;
}

node * del(node * head, int key) {
  node * follow = NULL;
  node * temp = head;

  while (temp != NULL) {
    if (temp->data == key) {
      if (follow == NULL) {
        head = temp->next;
        free(temp);
        temp = head;
      } else {
        follow->next = temp->next;
        free(temp);
        temp = follow->next;
      }
    } else {
      follow = temp;
      temp = temp->next;
    }
  }

  return head;
}

void change(node * head, int key, int data) {
  while (head != NULL) {
    if (head->data == key) head->data = data;
    head = head->next;
  }
}

int find(node * head, int key) {
  int pos = 1;
  while (head != NULL) {
    if (head->data == key) return pos;
    head = head->next;
    pos++;
  }
  return -1;
}

node * inc_add(node * head, int data) {
  node * temp = head;
  node * a = create(data);
  if (head->data > data) {
    a->next = head;
    head = a;
  } else {
    while (temp->next != NULL && temp->next->data <= data) temp = temp->next;
    a->next = temp->next;
    temp->next = a;
  }
  return head;
}

node * random_create(int l) {
  node * head = create(rand()%100);
  node * temp = head;
  for (int j = 0; j < l-1; j++) {
    temp->next = create(rand()%100);
    temp = temp->next;
  }
  return head;
}

void sort(node * head, int pattern) {
  node * i = NULL;
  node * j = NULL;
  if (pattern == 1) {
    // inc
    for (i = head; i->next != NULL; i = i->next) {
      for (j = head; j->next != NULL; j = j->next) {
        if (j->data > j->next->data) {
          int temp = j->data;
          j->data = j->next->data;
          j->next->data = temp;
        }
      }
    }
  } else {
    for (i = head; i->next != NULL; i = i->next) {
      for (j = head; j->next != NULL; j = j->next) {
        if (j->data < j->next->data) {
          int temp = j->data;
          j->data = j->next->data;
          j->next->data = temp;
        }
      }
    }
  }
}

int main () {
  node * l1_head = create(0);
  node * l2_head = create(0);
  node * l3_head = NULL;

  node * temp = NULL;

  srand((unsigned)time(NULL));

  // add at tail
  l1_head = add(l1_head, 1, 1);
  // add at head
  l1_head = add(l1_head, 0, 0);

  print(l1_head);

  // insert 0 before 1st
  l1_head = insert(l1_head, 1, 1, 0);
  print(l1_head);

  // insert 2 after 3rd
  l1_head = insert(l1_head, 3, 0, 2);
  print(l1_head);

  // insert -1 after 5th
  l1_head = insert(l1_head, 5, 0, -1);
  print(l1_head);

  l1_head = del(l1_head, 0);
  print(l1_head);

  l1_head = del(l1_head, -1);
  print(l1_head);

  l1_head = del(l1_head, 3);
  print(l1_head);

  change(l1_head, 1, 3);
  print(l1_head);

  for (temp = l1_head; temp != NULL; temp = temp->next) {
    printf("%3d: %3d\n", find(l1_head, temp->data), temp->data);
  }

  if (find(l1_head, -1) == -1) printf("no -1 in the linked list\n");
  else printf("-1 at %d", find(l1_head, -1));

  l2_head = inc_add(l2_head, 0);
  l2_head = inc_add(l2_head, 1);
  l2_head = inc_add(l2_head, -1);
  for (int i = 0; i < 10; i++) {
    l2_head = inc_add(l2_head, rand()%5);
  }
  print(l2_head);

  l3_head = random_create(10);
  print(l3_head);

  sort(l2_head, 0);
  print(l2_head);

  sort(l3_head, 0);
  print(l3_head);

  sort(l3_head, 1);
  print(l3_head);

  delete(l1_head);
  delete(l2_head);
  delete(l3_head);

  return 0;
}
