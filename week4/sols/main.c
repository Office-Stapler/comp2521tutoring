#include <stdio.h>
#include "Tree.h"


int main(void) {
    BSTree tree = BSTreeNew(5);
    BSTreeInsert(tree, 3);
    BSTreeInsert(tree, 8);
    BSTreeInsert(tree, 1);
    BSTreeInsert(tree, 4);
    BSTreeInsert(tree, 7);
    BSTreeInsert(tree, 9);
    
    BSTreeInfixTraversal(tree);
    BSTreePrefixTraversal(tree);
    BSTreePostfixTraversal(tree);
    printf("NodeLevel: %d\n", BSTreeNodeLevel(tree, 1));
    
}