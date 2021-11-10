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
    int countLeft = BSTreeNumNodes(root->left);
    int countRight = BSTreeNumNodes(root->right);
    
    return 1 + countLeft + countRight;
}

int BSTreeCountOdds(BSTree root) {
    // Base Case
    if (root == NULL) {
        return 0;
    }
    return (root->value % 2) + BSTreeCountOdds(root->left) + BSTreeCountOdds(root->right);
}

int BSTreeHeight(BSTree root) {
    // Base case
    if (root == NULL) {
        return -1;
    }
    
    int leftHeight = BSTreeHeight(root->left);
    int rightHeight = BSTreeHeight(root->right);
    
    if (leftHeight > rightHeight) {
        return leftHeight + 1;
    }
    
    return rightHeight + 1;
}
/**
Implement the following function to count number of internal nodes in a given tree. 
An internal node is a node with at least one non-empty subtree. 
*/
int BSTreeCountInternal(BSTree root) {
    if (root == NULL) {
        return 0;
    }
    
    if (root->left == NULL && root->right == NULL) {
        return 0;
    }
    int leftCount = BSTreeCountInternal(root->left);
    int rightCount = BSTreeCountInternal(root->right);
    
    return 1 + leftCount + rightCount;
}

int BSTreeNodeLevel(BSTree root, int key) {
    if (root == NULL) {
        return -1;
    }
    
    if (root->value > key) {
        int leftNodeLevel = BSTreeNodeLevel(root->left, key);
        if (leftNodeLevel == -1) return -1;
        return 1 + leftNodeLevel;
    }
    
    if (root->value == key) {
        return 0;
    }
    
    int rightNodeLevel = BSTreeNodeLevel(root->right, key);
    if (rightNodeLevel == -1) return -1;
    return 1 + rightNodeLevel;
}

int BSTreeCountGreater(BSTree root, int val) { 
    if (root == NULL) {
        return 0;
    }
    
    if (root->value < val) {
        BSTreeCountGreater(root->right, val);
    }
    
    int countLeft = BSTreeCountGreater(root->left, val);
    int countRight = BSTreeCountGreater(root->right, val);
    return 1 + countLeft + countRight; 
    
}

int isHeightBalanced(BSTree root) { 
    return 0; 
}

