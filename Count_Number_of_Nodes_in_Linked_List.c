//This Program for a Count Number of Nodes In a Given Linked List

#include<stdio.h>
#include<stdlib.h>
// linked list node structure
struct node{
    int data;
    struct node *next;
};
void create(struct node**head,int data){
    // create a new node and memory is allocate
        struct node *newNode=malloc(sizeof(struct node*));
        newNode->data=data;
        newNode->next=*head;
        
        *head=newNode;
}
int PrintLinkedList(struct node*head){
    struct node *temp;
    int count=0;
    temp=head;
 //travers a linked list and maintain a count
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
            count++;//increment in count
        }
    printf("NULL\n");
    return count;
}
int main(){
    struct node *list=NULL;
    int count;
    // calling a count function
    create(&list ,10);
    create(&list ,27);
    create(&list ,13);
    create(&list ,48);
    create(&list ,55);
    create(&list ,32);
    create(&list ,27); 
    create(&list ,34);
    // calling a PrintLinkedList function and return Value Stored in a count variable
    count=PrintLinkedList(list);
    printf("The Number of List In Linked List is =%d\n",count);
    
    return 0;
}





/*OUTPUT:
       34->27->32->55->48->13->27->10->NULL
       The Number of List In Linked List is =8*/

