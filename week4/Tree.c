#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

BSTree BSTreeNew(int value) {
    BSTree tree = malloc(sizeof(*tree));
    tree->value = value;
    tree->left = tree->right = NULL;
    return tree;
}


BSTree BSTreeInsert(BSTree root, int value) {
    if (root == NULL) {
        return BSTreeNew(value);
    }
    
    if (root->value > value) {
        root->left = BSTreeInsert(root->left, value);
    } else if (root->value < value) {
        root->right = BSTreeInsert(root->right, value);
    }
    return root;
}

void doInfixTraversal(BSTree root) {
    if (root == NULL) {
        return;
    }

}

void BSTreeInfixTraversal(BSTree root) {
    printf("InFix order: ");
    doInfixTraversal(root);
    putchar('\n');
}

void doBSTreePostfixTraversal(BSTree root) {
    if (root == NULL) {
        return;
    }
    
}

void BSTreePostfixTraversal(BSTree root) {
    printf("Postfix order: ");
    doBSTreePostfixTraversal(root);
    putchar('\n');
}

void doBSTreePrefixTraversal(BSTree root) {
    if (root == NULL) {
        return;
    }
    
}

void BSTreePrefixTraversal(BSTree root) {
    printf("Prefix order: ");
    doBSTreePrefixTraversal(root);
    putchar('\n');
}


int BSTreeNumNodes(BSTree root) {
    return 0;
}

int BSTreeCountOdds(BSTree root) {
    return 0;
}

int BSTreeHeight(BSTree root) {
    return 0;
}

int BSTreeCountInternal(BSTree root) {
    return 0; 
}

int BSTreeNodeLevel(BSTree root, int key) { 
    return 0; 
}

int BSTreeCountGreater(BSTree root, int val) { 
    return 0; 
}

int isHeightBalanced(BSTree root) { 
    return 0; 
}

