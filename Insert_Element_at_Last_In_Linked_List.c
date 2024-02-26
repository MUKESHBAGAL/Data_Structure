//This Program for a Insert Node at a Last Linked List

#include<stdio.h>
#include<stdlib.h>
// linked list node structure
struct node{
    int data;
    struct node *next;
};
void addlast(struct node**head,int data){
    // create a new node and memory is allocate
        struct node *newNode=malloc(sizeof(struct node));
        newNode->data=data;
        newNode->next=NULL;
        if(*head==NULL)
        *head=newNode;
        else{
            struct node *temp=*head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
        
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
    addlast(&list ,10);
    addlast(&list ,27);
    addlast(&list ,13);
    addlast(&list ,48);
    addlast(&list ,55);
    addlast(&list ,32);
    addlast(&list ,27); 
    addlast(&list ,34);
    
    PrintLinkedList(list);
    return 0;
}





/*OUTPUT:
      10->27->13->48->55->32->27->34->NULL
       
      */
