typedef struct node {
    int value;
    struct node *next;
} node;

typedef struct list {
   node* head;
   node* tail;
} *List;

void appendList(List, int);
List newList(void);
List makeList(int[], int);
int countNodes(List);

