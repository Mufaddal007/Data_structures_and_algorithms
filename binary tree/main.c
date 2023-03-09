#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node *left, *right;
};
struct node* create(int x)
{
    struct node *newnode=(struct node*) malloc(sizeof(struct node));
    newnode-> data=x;
    newnode -> left= NULL;
    newnode -> right=NULL;
    return newnode;

}
void inorder(struct node* root)
{
if (root==NULL) return ;
inorder(root->left);
printf("%d ", root -> data);
inorder(root -> right);
return ;

}

void preorder(struct node* root)
{
if (root==NULL) return ;
preorder(root -> right);
preorder(root->left);
printf("%d ", root -> data);
return ;
}

void postorder(struct node* root)
{
if (root==NULL) return ;
postorder(root->left);
postorder(root -> right);
printf("%d ", root -> data);
return ;

}

int main()
{
    struct node* root=NULL;
    root=create(2);
    root -> left= create(7);
    root -> right= create(5);
    root -> left -> left  = create(2);
    root -> left -> right =create(6);
    root -> left -> right -> left = create(5);
    root -> left -> right -> right = create(11);
    root -> right -> right = create(9);
    root -> right -> right -> left= create(4);

    inorder(root);
    printf("\n");

    preorder(root);
    printf("\n");

    postorder(root);
    printf("\n");

    return 0;
}
