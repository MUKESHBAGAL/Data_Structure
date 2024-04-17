#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *left, *right;
};
struct node *insert (struct node *node, int data){
  if (node == NULL){
        struct node *temp=malloc (sizeof(struct node));
        temp->data=data;
        temp->left=temp->right=NULL;
        
        return temp;
  }
  if (data < node->data)
    node->left = insert (node->left, data);
  else if (data > node->data)
    node->right = insert (node->right, data);

  return node;
}
void preorder (struct node *root){
  if (root != NULL)
    {
      printf ("%d ", root->data);
      preorder (root->left);
      preorder (root->right);
    }
}
int count_nonleaf_Node(struct node *root){
    if(root==NULL)
    return 0;
    if(root->left==NULL && root->right==NULL)
    return 0;
    else
        return 1+count_nonleaf_Node(root->left)+count_nonleaf_Node(root->right);
}
int main (){
  struct node *root = NULL;
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
  int count=count_nonleaf_Node(root);
  printf("Non Leaf Node in a tree is a %d\n",count);
  return 0;
}

// OUTPUT::
        // The preorder is :
        // 9 7 5 8 14 11 16 
        // Non Leaf Node in a tree is a 3
