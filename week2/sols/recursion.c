#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
	int data;
	struct node *next;
} Node;

typedef Node *List;
Node* newNode(int);
List makeList(int[], int);
void freeList(List);

void printList(List);
int listLength(List);
int listCountOdds(List);
bool listIsSorted(List);
List listDelete(List, int);


int main(void) {
    int a[] = {1,2,3,4,5,6,7};
    List l = makeList(a, 7);
    
    printf("Length: %d\n", listLength(l));
    printf("Number of odd values: %d\n", listCountOdds(l));
    printf("Is the list sorted? %s\n", listIsSorted(l) ? "Yes" : "No");

    freeList(l);
}

void printList(List l) {
    if (l == NULL) {
        printf("NULL\n");
    } else {
        printf("%d -> ", l->data);
        printList(l->next);   
    }
}

Node* newNode(int val) {
    Node* new = malloc(sizeof(Node));
    new->next = NULL;
    new->data = val;
}

List makeList(int a[], int size) {
    if (size <= 0) {
        fprintf(stderr, "Please enter a valid size");
        exit(1);
    }
    
    List head = newNode(a[0]);
    List curr = head;
    for (int i = 1; i < size; ++i) {
        List new = newNode(a[i]);
        curr->next = new;
        curr = new;
    }
    return head;
}

void freeList(List l) {
    Node* curr = l;
    while (curr != NULL) {
        Node* next = curr->next;
        free(curr);
        curr = next;
    }
}

int listLength(List l) {
    if (l == NULL) {
        return 0;
    }
    return 1 + listLength(l->next);
}

int listCountOdds(List l) {
    if (l == NULL) {
        return 0;
    }
    return (l->data % 2) + listCountOdds(l->next);
}

bool listIsSorted(List l) {
    if (l == NULL || l->next == NULL) {
        return true;
    }
    return (l->data <= l->next->data) && listIsSorted(l->next);
}

List listDelete(List l, int val) {
    if (l == NULL) {
        return l;
    }
    
    if (l->data == val) {
        Node* next = l->next;
        free(l);
        return next;
    }
    l->next = listDelete(l->next, val);
    
    return l;
}
