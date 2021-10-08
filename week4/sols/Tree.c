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
    
    doInfixTraversal(root->left);
    printf("%d ", root->value);
    doInfixTraversal(root->right);
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

    doBSTreePostfixTraversal(root->left);
    doBSTreePostfixTraversal(root->right);
    printf("%d ", root->value);
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
    
    printf("%d ", root->value);
    doBSTreePrefixTraversal(root->left);
    doBSTreePrefixTraversal(root->right);
}

void BSTreePrefixTraversal(BSTree root) {
    printf("Prefix order: ");
    doBSTreePrefixTraversal(root);
    putchar('\n');
}


int BSTreeNumNodes(BSTree root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + BSTreeNumNodes(root->left) + BSTreeNumNodes(root->right);
}

int BSTreeCountOdds(BSTree root) {
    if (root == NULL) {
        return 0;
    }
    
    return (root->value % 2) + BSTreeCountOdds(root->left) + BSTreeCountOdds(root->right);
}

int BSTreeHeight(BSTree root) {
    if (root == NULL) {
        return 0;
    }
    
    if (root->left == NULL && root->right == NULL) {
        return 0;
    }
    
    int lh = BSTreeHeight(root->left);
    int rh = BSTreeHeight(root->right);
    
    if (lh > rh) {
        return 1 + lh;
    }
    return 1 + rh;
    
}

int BSTreeCountInternal(BSTree root) {
    if (root == NULL) {
        return 0;
    }
    
    if (root->left == NULL && root->right == NULL) {
        return 0;
    }
    
    return 1 + BSTreeCountInternal(root->left) + BSTreeCountInternal(root->right);
    
}

int doBSTreeNodeLevel(BSTree t, int key, int level) {
    if (t == NULL) {
        return -1;
    }
    if (t->value == key) {
        return level;
    }
    int levelLeft = doBSTreeNodeLevel(t->left, key, level + 1);
    int levelRight = doBSTreeNodeLevel(t->right, key, level + 1);
    if (levelLeft == -1) {
        return levelRight;
    }
    return levelLeft;
}

int BSTreeNodeLevel(BSTree t, int key) { 
    return doBSTreeNodeLevel(t, key, 0);
}

int BSTreeCountGreater(BSTree t, int val) { 
    if (t == NULL) {
        return 0;
    }
    
    if (t->value > val) {
        return 1 + BSTreeCountGreater(t->left, val) + BSTreeCountGreater(t->right + val);
    }
    
    return BSTreeCountGreater(t->right, val);
}

int isHeightBalanced(BSTree t) { 
    if (t == NULL) {
        return 0;
    }
    
    
}

