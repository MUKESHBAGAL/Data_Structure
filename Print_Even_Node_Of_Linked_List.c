// This Program for Print even node of linked list
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
void PrintLinkedList(struct node*head){
    struct node *temp;
    temp=head;
 //travers a linked list and maintain a count
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
    printf("NULL\n");
}
void PrintEvenNode(struct node*head){
    struct node *temp;
    temp=head;
 //travers a linked list and maintain a count
        while(temp!=NULL){
            if(temp->data%2==0)//when data of linked list is even then printf statement is execute
            printf("%d->",temp->data);
            temp=temp->next;
          
        }
    printf("NULL\n");
}
int main(){
    struct node *list=NULL;
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
    printf("\nOrignial Linked List: ");
    PrintLinkedList(list);
    printf("\n\nOnly Even node of Linked List: ");
    PrintEvenNode(list);
    
    return 0;
}





/*OUTPUT:
       3Orignial Linked List: 34->27->32->55->48->13->27->10->NULL


      Only Even node of Linked List: 34->32->48->10->NULL
*/

