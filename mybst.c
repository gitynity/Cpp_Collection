#include <stdio.h>
#include <stdlib.h>

struct bstnode
{
	struct bstnode *left;
	struct bstnode *right;
	struct bstnode *data;
};

struct bstnode* getnode(int value)
{

	struct bstnode *temp = (struct bstnode*)malloc(sizeof(struct bstnode));
	temp->left = NULL;
	temp->right = NULL;
	temp->data = value;

	return temp;
}

void insert(struct bstnode *root , int val)
{
	struct bstnode *p = root;

	if (root == NULL)
	{
		p = getnode(val);
		p = root;
	}

	else
		if(val < root->data)
		{
			p = p->left;
			p = getnode(val);
		}
		else
			{
				p = p->right;
				p = getnode(val);
			}
		printf("%d\n",p->data);
}

void preorder(struct bstnode *root)	//root is the pointer where to start the show ; kind of root, if we want pre order for whole tree
{
	if(root == NULL) return;

	printf("%d\n",root->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder(struct bstnode *root)	//root is the pointer where to start the show ; kind of root, if we want postorder for whole tree
{
	if(root == NULL) return;

	postorder(root->left);
	postorder(root->right);
	printf("%d\n",root->data);

}

void inorder(struct bstnode *root)	//root is the pointer where to start the show ; kind of root, if we want inorder for whole tree
{
	if(root == NULL) return;

	inorder(root->left);
	printf("%d\n",root->data);
	inorder(root->right);
}

int main(int argc, char const *argv[])
{
	struct bstnode *root = NULL;

	insert(root , 5);
	insert(root , 6);

	/*
	printf("%d\n",root->data);
	inorder(root);
	*/
	return 0;
}
