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
void Update1st_Node(struct node*head,int key){
    struct node *temp,*ptr;
    temp=head;
    ptr=temp->next;
    temp->data=key;
    printf("%d->",temp->data);
        while(ptr!=NULL){
       
            printf("%d->",ptr->data);
            ptr=ptr->next;
          
        }
    printf("NULL\n");
}
int main(){
    struct node *list=NULL;
   int key;
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
   printf("Enter A Data we want to Update in a 1st node : ");
   scanf("%d",&key);
    printf("\n\nAfter Update 1st node of Linked List: ");
    Update1st_Node(list,key);
    
    return 0;
}





/*OUTPUT:
        Orignial Linked List: 34->27->32->55->48->13->27->10->NULL
        Enter A Data we want to Update in a 1st node : 10
        
        
        After Update 1st node of Linked List: 10->27->32->55->48->13->27->10->NULL

*/
