//This Program for a Delete 1st Node of Linked List

#include<stdio.h>
#include<stdlib.h>
// linked list node structure
struct node{
    int data;
    struct node *next;
};
void create_Linked_List(struct node**head,int data){
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
    temp=head;
 //travers a linked list 
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
    printf("NULL\n");
}
void Delete_frist_Node(struct node **head){
    struct node *temp=NULL;
    temp=*head;
    *head=(*head)->next;
    free(temp);
}
int main(){
    struct node *list=NULL;
    // calling a count function
    create_Linked_List(&list ,10);
    create_Linked_List(&list ,27);
    create_Linked_List(&list ,13);
    create_Linked_List(&list ,48);
    create_Linked_List(&list ,55);
    create_Linked_List(&list ,32);
    create_Linked_List(&list ,27); 
    create_Linked_List(&list ,34);
    printf("\nOrignial Linked List: ");
    PrintLinkedList(list);
    printf("\nAfter Delete 1st Node: ");
    Delete_frist_Node(&list);
     PrintLinkedList(list);
    return 0;
}





/*OUTPUT:
       Orignial Linked List: 10->27->13->48->55->32->27->34->NULL

       After Delete 1st Node: 27->13->48->55->32->27->34->NULL

       
*/
