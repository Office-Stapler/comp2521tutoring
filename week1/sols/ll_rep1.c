#include <stdio.h>

// Representation 1
struct node {
    int value;
    struct node *next;
};
typedef struct node *List;
typedef struct node* Node;

int sum(List l);

int main(void) {
    
}

int sum(List l) {
    Node curr = l;
    int sum = 0;
    while (curr != NULL) {
        sum += curr->value;
        curr = curr->next;
    }
    return sum;
}