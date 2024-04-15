// Program for tree traversal preorder in Binary Tree
#include<stdio.h>
#include<stdlib.h>
// We are creating struct for the binary tree below
struct node
{
  int data;
  struct node *left, *right;
};

// newNode function for initialisation of the newly created node
struct node *insert (struct node *node, int data)
{
  /* When there no node in the tree(subtree) then create 
   and return new node using newNode function */
  if (node == NULL){
        struct node *temp=malloc (sizeof(struct node));
        temp->data=data;
        temp->left=temp->right=NULL;
        
        return temp;
  }
  /* If not then we recur down the tree to find correct position for insertion */
  if (data < node->data)
    node->left = insert (node->left, data);
  else if (data > node->data)
    node->right = insert (node->right, data);

  return node;
}

// Here we print the preorder recursively
void preorder (struct node *root)
{
  if (root != NULL)
    {
      printf ("%d ", root->data);
      preorder (root->left);
      preorder (root->right);
    }
}
int count_Node(struct node *root){
    if(root==NULL)
        return 0;
    
    return 1+count_Node(root->left)+count_Node(root->right);
}

// Basic Program to insert new node at the correct position in BST

int main ()
{
  /* What our binary search tree looks like really 
      9 
     / \ 
    7  14
   / \ / \ 
  5  8 11 16 */
  int count;
  struct node *root=NULL;
  root = insert (root, 9);
  insert (root, 7);
  insert (root, 5);
  insert (root, 8);
  insert (root, 14);
  insert (root, 11);
  insert (root, 16);
  printf ("The preorder is :\n");
  preorder (root);
  printf("\n");
  count=count_Node(root);
  printf("Number of node in a Tree is %d\n",count);
  return 0;
}

// OUTPUT::
//     The preorder is :
//     9 7 5 8 14 11 16
//     Number of node in a Tree is 7
