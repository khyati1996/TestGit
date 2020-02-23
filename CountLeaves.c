#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * right;
	struct node * left;
};

int arr[5]; //size of array having maximum number of elements in the binary tree
static int i=0;
struct node* newNode(int value)
{
	struct node * node= (struct node *)malloc(sizeof(struct node));
	node->data=value;
	node->right=NULL;
	node->left = NULL;
	printf("%d ",node->data);
	return(node);
}

int CountLeaves(struct node * root)
{
	if(root == NULL)
		return 0;
	else if(root->left==NULL && root->right ==NULL)
		{ 
			arr[i]=root->data; i++;return 1; 
		}
	else
	return (CountLeaves(root->right)+CountLeaves(root->left));
}
int main()
{
	
	struct node * root = newNode(1);
	root->left= newNode(2);
	root->right = newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	int count =CountLeaves(root);
	printf("Number of Leaves %d",count);
	printf("The leaves are:");
	for(int j=0;j<count;j++)
	{
		printf("%d \t",arr[j]);
	}
	return 0;
	
}


