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
int listLength(List);
int listCountOdds(List);
bool listIsSorted(List);
List listDelete(List, int);


int main(void) {
    int a[] = {1,2,3,4,5,6,7};
    List l = makeList(a);
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
        curr = curr->next;
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
