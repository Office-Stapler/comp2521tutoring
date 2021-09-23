#include <stdio.h>

#include "make1.h"
#include "make2.h"

int main(void) {
    int a[] = {1,2,3,4,5};
    int b[] = {2,3,4,5,6};
    List l1 = makeList(a, 5);
    List l2 = makeList(b, 5);
    node* n1 = l1->head;
    node* n2 = l2->head;
    while (n1 != l1->tail) {
        Vector v = makeVector(n1->value, n2->value);
        printVector(v);
        n1 = n1->next;
        n2 = n2->next;
    }
    printf("Last vector combination\n");
    Vector v = makeVector(n1->value, n2->value);
    printVector(v);    
}