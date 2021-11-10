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
    BSTreeInsert(tree, 6);
    
    BSTreeInfixTraversal(tree);
    BSTreePrefixTraversal(tree);
    BSTreePostfixTraversal(tree);
    printf("NumNodes: %d\n", BSTreeNumNodes(tree));
    printf("CountOdds: %d\n", BSTreeCountOdds(tree));
    printf("Height: %d\n", BSTreeHeight(tree));
    printf("Internal Nodes: %d\n", BSTreeCountInternal(tree));
    printf("Level of 1: %d\n", BSTreeNodeLevel(tree, 1));
    printf("Level of 20: %d\n", BSTreeNodeLevel(tree, 20));
    printf("Nodes Greater than 2: %d\n", BSTreeCountGreater(tree, 2));
}