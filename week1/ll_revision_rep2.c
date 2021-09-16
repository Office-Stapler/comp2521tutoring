#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

struct list {
    struct node *head;
};

typedef struct list *List;

int sum(List l);
void delete(List l, int val);

int main(void) {
    
}

int sum(List l) {
    return 0;
}