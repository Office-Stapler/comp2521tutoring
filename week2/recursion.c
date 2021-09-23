#include <stdio.h>
#include <stdbool.h>

typedef struct node {
	int data;
	struct node *next;
} Node;

typedef Node *List;

int listLength(List);
int listCountOdds(List);
bool listIsSorted(List);
List listDelete(List, int);


int main(void) {
    
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
