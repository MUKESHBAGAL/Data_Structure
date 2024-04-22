#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *left, *right;
};
struct node *insert (struct node *node, int data)
{
  if (node == NULL){
        struct node *temp=malloc (sizeof(struct node));
        temp->data=data;
        temp->left=temp->right=NULL;
        
        return temp;
  }
  else
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
struct node *search (struct node *node, int data)
{

  if (node == NULL || node->data==data){
        return node;
  }
  else{
          if (data < node->data)
            node->left = search (node->left, data);
          else if (data > node->data)
            node->right = search (node->right, data);
      }
}
int main ()
{
  /* What our binary search tree looks like really 
      9 
     / \ 
    7  14
   / \ / \ 
  5  8 11 16 */
  int element;
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
  printf("Enter a Element we want to serch or find: ");
  scanf("%d",&element);
  if(search(root ,element))
  printf("Element is found\n");
  else
  printf("Element is not found\n");
  return 0;
}

// OUTPUT::
            // The preorder is :
            // 9 7 5 8 14 11 16 
            // Enter a Element we want to serch or find: 5
            // Element is found
            
            
/*              The preorder is :
		9 7 5 8 14 11 16 
		Enter a Element we want to serch or find: 20
		Element is not found
*/
