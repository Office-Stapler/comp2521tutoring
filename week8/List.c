// List.c - Lists of integers

#include <assert.h>
#include <err.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sysexits.h>

#include "List.h"

// data structures representing List
struct ListNode {
	int data;
	struct ListNode *next;  // pointer to next node
};

struct ListRep {
	int size;                  // number of elements in the list
	struct ListNode *first; // pointer to node containing first value
	struct ListNode *last;  // pointer to node containing last value
};

/**
 * Create a new, empty List.
 */
List ListNew(void) {
	struct ListRep *l = malloc(sizeof(*l));
	if (l == NULL) {
		err(EX_OSERR, "couldn't allocate List");
	}

	l->size = 0;
	l->first = NULL;
	l->last = NULL;
	return l;
}

/**
 * Release all resources associated with an List.
 */
void ListFree(List l) {
	if (l == NULL) return;

	struct ListNode *curr = l->first;
	while (curr != NULL) {
		struct ListNode *temp = curr;
		curr = curr->next;
		free(temp);
	}
	free(l);
}

/**
 * Create an List by reading values from a file.
 * Assume that the file is open for reading.
 */
List ListRead(FILE *in) {
	List l = ListNew();

	int v;
	while (fscanf(in, "%d", &v) == 1) {
		ListAppend(l, v);
	}
	return l;
}

/**
 * Display List as one integer per line on `stdout`.
 */
void ListShow(List l) {
	ListPrint(stdout, l);
}

/**
 * Create a new ListNode with value v
 * (this function is local to this ADT)
 */
static struct ListNode *newListNode(int v) {
	struct ListNode *n = malloc(sizeof(*n));
	if (n == NULL) {
		err(EX_OSERR, "couldn't allocate List node");
	}
	n->data = v;
	n->next = NULL;
	return n;
}

/**
 * Append one integer to the end of an List.
 */
void ListAppend(List l, int v) {
	assert(l != NULL);

	struct ListNode *n = newListNode(v);
	if (l->first == NULL) {
		l->first = l->last = n;
	} else {
		l->last->next = n;
		l->last = n;
	}
	l->size++;
}

/**
 * Insert an integer into correct place in a sorted List.
 */
void ListInsertInOrder(List l, int v) {
	assert(l != NULL);

	// TODO: Task 1 - Implement this function
}

/**
 * Return the number of elements in an List.
 */
int ListLength(List l) {
	assert(l != NULL);

	return l->size;
}

/**
 * Make a copy of an List.
 * New list should look identical to the original list.
 */
List ListCopy(List l) {
	assert(l != NULL);

	List copy = ListNew();
	for (struct ListNode *curr = l->first;
			curr != NULL; curr = curr->next) {
		ListAppend(copy, curr->data);
	}
	return copy;
}

/**
 * Make a sorted copy of an List.
 */
List ListSortedCopy(List l) {
	assert(l != NULL);

	// TODO: Task 2 - Implement this function

	// TODO: Replace this with your return value
	return ListNew();
}

/**
 * Check whether an List is sorted in ascending order.
 * Returns `false` if list is not sorted, `true` if it is.
 */
bool ListIsSorted(List l) {
	assert(l != NULL);

	// trivial cases, 0 or 1 items
	if (l->size < 2) {
		return true;
	}

	// scan list, looking for out-of-order pair
	for (struct ListNode *curr = l->first;
			curr->next != NULL; curr = curr->next) {
		if (curr->next->data < curr->data) {
			return false;
		}
	}

	// nothing out-of-order, must be sorted
	return true;
}

/**
 * Check internal consistency of an List.
 */
bool ListOK(List l) {
	assert(l != NULL);

	if (l->size == 0) {
		return (l->first == NULL && l->last == NULL);
	}

	// scan to (but not past) last node
	struct ListNode *curr = l->first;
	int numNodes = 1; // at least one node
	while (curr->next != NULL) {
		numNodes++;
		curr = curr->next;
	}

	return (numNodes == l->size && curr == l->last);
}

/**
 * Display an List as one integer per line to a file.
 * Assume that the file is open for writing.
 */
void ListPrint(FILE *out, List l) {
	assert(l != NULL);

	for (struct ListNode *curr = l->first;
			curr != NULL; curr = curr->next) {
		fprintf(out, "%d\n", curr->data);
	}
}
