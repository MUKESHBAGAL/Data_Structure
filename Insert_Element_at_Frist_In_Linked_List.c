//This Program for a Insert Node at a Frist Linked List

#include<stdio.h>
#include<stdlib.h>
// linked list node structure
struct node{
    int data;
    struct node *next;
};
void addfrist(struct node**head,int data){
    // create a new node and memory is allocate
        struct node *newNode=malloc(sizeof(struct node));
        newNode->data=data;
        newNode->next=*head;
        
        *head=newNode;
}
void PrintLinkedList(struct node*head){
    struct node *temp;
    int count=0;
    temp=head;
 //travers a linked list 
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
    printf("NULL\n");
 
}
int main(){
    struct node *list=NULL;
    // calling a count function
    addfrist(&list ,10);
    addfrist(&list ,27);
    addfrist(&list ,13);
    addfrist(&list ,48);
    addfrist(&list ,55);
    addfrist(&list ,32);
    addfrist(&list ,27); 
    addfrist(&list ,34);
    
    PrintLinkedList(list);
    return 0;
}





/*OUTPUT:
       34->27->32->55->48->13->27->10->NULL
       
      */
