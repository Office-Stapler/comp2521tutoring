#include <stdio.h>
#include <stdlib.h>

#include "make1.h"

List newList(void) {
    List l = malloc(sizeof(struct list));
    l->head = l->tail = NULL;
    return l;
}

void appendList(List l, int val) {
    node* new = malloc(sizeof(node));
    new->value = val;
    if (l->head == NULL) {
        l->head = l->tail = new;
    } else {
        l->tail->next = new;
        l->tail = new;
    }
}

List makeList(int a[], int size) {
    List l = newList();
    for (int i = 0; i < size; ++i) {
        appendList(l, a[i]);
    }
    return l;
}

int countNodes(List l)  {
    int count = 0;
    for (node* curr = l->head; curr != NULL; curr = curr->next, ++count);
    return count;
}
