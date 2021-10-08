#define NOT_HEIGHT_BALANCED -99

typedef struct BSTNode *BSTree;
typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

BSTree BSTreeNew(int value);

BSTree BSTreeInsert(BSTree root, int value);

void BSTreeInfixTraversal(BSTree root);

void BSTreePostfixTraversal(BSTree root);

void BSTreePrefixTraversal(BSTree root);

int BSTreeNumNodes(BSTree root);

int BSTreeCountOdds(BSTree root);

int BSTreeHeight(BSTree root);

int BSTreeCountInternal(BSTree root);

int BSTreeNodeLevel(BSTree root, int key);

int BSTreeCountGreater(BSTree root, int val);

int isHeightBalanced(BSTree root);