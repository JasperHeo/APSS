#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#include "../include/tree.h"

TreeNode* treeInit(unsigned int depth)
{
	int i;

	TreeNode* node = getNode();
	node->value = rand()%100;
	//printf("node->value : %d %p\n", node->value, node);
	if(depth != 0) {
		for(i=0; i<MAX_CHILD; i++){
			node->child[i] = treeInit(depth-1);
		}
	}
	return node;
}

TreeNode* getNode()
{
	TreeNode* node = (TreeNode*)calloc(1, sizeof(TreeNode));
	return node;
}

void treePrint(TreeNode *root, int root_value)
{
	int i;

	//printf("%p \n", root);
	if(root != NULL){
		printf("%d -> %d\n", root_value, root->value);
		for(i=0; i<MAX_CHILD; i++){
			treePrint(root->child[i], root->value);
		}
	}	
}
