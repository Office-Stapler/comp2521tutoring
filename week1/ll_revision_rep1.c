#include <stdio.h>
#include <stdlib.h>
// Representation 1
struct node {
    int value;
    struct node *next;
};
typedef struct node *List;

int sum(List l);

int main(void) {
    List head = malloc(sizeof(struct node));
    head->value = 10;
    struct node *n1 = malloc(sizeof(struct node));
    n1->value = 20;
    head->next = n1;
    printf("%d\n", sum(head));
}

int sum(List l) {
    int sum = 0;
    List curr = l;
    while (curr != NULL) {
        sum += curr->value;
        curr = curr->next;
    }
    return sum;
}