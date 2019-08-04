#define MAX_CHILD 3

typedef struct treeNode{
	int value;
	struct treeNode* parent;
	struct treeNode* child[MAX_CHILD];
} TreeNode; 

TreeNode* treeInit(unsigned int nodeSize);
void treePrint();
TreeNode* getNode();
