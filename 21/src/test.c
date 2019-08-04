#include<stdio.h>
#include<stdlib.h>

#include "../include/tree.h"

int main()
{

	printf("start... \n");

	TreeNode* root = treeInit(3);
	treePrint(root, -1);
	printf("\n");

	printf("end... \n");

	return 0;
}

