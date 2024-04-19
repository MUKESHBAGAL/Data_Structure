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
int Print_Node_from_K_Distance(struct node *root,int key){
  if(root==NULL || key<0){
     printf("something is wrong or our tree is empty");
     return 0;
  }
      if(key==0){
          printf("%d ",root->data);
          return 1;
        
      }
      Print_Node_from_K_Distance(root->left,key-1);
      Print_Node_from_K_Distance(root->right,key-1);
}

int main (){
  struct node *root = NULL;
  int key;
  root = insert (root, 9);
  insert (root, 7);
  insert (root, 5);
  insert (root, 8);
  insert (root, 14);
  insert (root, 11);
  insert (root, 16);
  insert (root, 24);
  insert (root, 21);
  insert (root, 26);

  printf ("The preorder is :\n");
  preorder (root);
  printf("\n");
  printf("Enter Number of level to print a node :");
  scanf("%d",&key);
  Print_Node_from_K_Distance(root, key);
  printf("\n");
  return 0;
}

// OUTPUT::
//	The preorder is :
//	9 7 5 8 14 11 16 24 21 26 
//	Enter Number of level to print a node :2
//	5 8 11 16 

