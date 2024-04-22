#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node *insert(struct node *root,int data){
    if(root==NULL){
        struct node *temp=malloc(sizeof(struct node));
        temp->data=data;
        temp->left=temp->right=NULL;
        return temp;
    }
    
    if(data>root->data)
        root->right=insert(root->right,data);
    else if(data<root->data)
        root->left=insert(root->left,data);
        
    return root;
}

void Preorder (struct node *root){
    if (root != NULL){
        printf ("%d ", root->data);
        Preorder (root->left);
        Preorder (root->right);
    }
}

int child_sum_prop(struct node *root){
    if(root==NULL || (root->left==NULL && root ->right==NULL))
        return 1;
    
    int sum=0;
    if(root->left!=NULL)
        sum+=root->left->data;
    if(root->right!=NULL)
        sum+=root->right->data;
        
    return (root->data==sum) && child_sum_prop(root->left) && child_sum_prop(root->right);
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

    printf ("The Preorder is :\n");
    Preorder (root);
    printf("\n");
    
    if(child_sum_prop(root))
        printf("The tree satisfies the child sum property.\n");
    else
        printf("The tree does not satisfy the child sum property.\n");
    
    return 0;
}


// OUTPUT::
//         The Preorder is :
//         9 7 5 8 14 11 16 
//         The tree does not satisfy the child sum property.
