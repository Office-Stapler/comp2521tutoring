#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

struct list {
    struct node *head;
};

typedef struct list *List;
typedef struct node *Node;

int sum(List l);
void delete(List l, int val);

int main(void) {
    
}

int sum(List l) {
    Node curr = l->head;
    int sum = 0;
    while (curr != NULL) {
        sum += curr->value;
        curr = curr->next;
    }
    return sum;
}

void delete(List l, int val) {
    Node curr = l->head;
    Node prev = NULL;
    while (curr != NULL) {
        if (curr->value == val) {
            if (prev != NULL) {
                prev->next = curr->next;
            } else {
                // if prev is NULL, curr is head
                l->head = curr->next;
            }
            break;
        }
        prev = curr;
        curr = curr->next;
    }
}