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
    printf("List before deletion: \n");
    printList(l);
    
    freeList(l);
}

Node* newNode(int val) {
    Node* new = malloc(sizeof(Node));
    new->next = NULL;
    new->data = val;
    return new;
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

void printList(List l) {
    if (l == NULL) {
        printf("NULL\n");
    } else {
        printf("%d -> ", l->data);
        printList(l->next);   
    }
}

int listLength(List l) {
    return 0;
}

int listCountOdds(List l) {
    return 0;
}

bool listIsSorted(List l) {
    return true;
}

List listDelete(List l, int val) {
    return NULL;
}
