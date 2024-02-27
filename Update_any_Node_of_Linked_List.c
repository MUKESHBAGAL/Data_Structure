// This Program for update any node of linked list
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
    temp=head;
    int count=0;
 //travers a linked list and maintain a count
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
          count++;
        }
    printf("NULL\n");
   return count;
}
void Update_last_Node(struct node*head,int key,int count,int location){
    struct node *temp,*ptr;
    temp=head;
    ptr=head;
   if(location>count)
   printf("Something Else Input");
   else{
        for(int i=1;i<location;i++){
            printf("%d->",temp->data);
            temp=temp->next;
        }
          ptr=temp;
        temp->data=key;
        while(ptr->next!=NULL){
       
            printf("%d->",ptr->data);
            ptr=ptr->next;
          
        }
         printf("%d->",temp->data);
         printf("NULL\n");
   }
}
int main(){
    struct node *list=NULL;
   int key,count,pos;
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
   count=PrintLinkedList(list);
    printf("\nEntetr A Node Number We Want to Update: ");
   scanf("%d",&pos);
   printf("\nEnter A Data we want to Update  a node : ");
   scanf("%d",&key);
    printf("\n\nAfter Update 1st node of Linked List: ");
    Update_last_Node(list,key,count,pos);
    
    return 0;
}





/*OUTPUT:
            Orignial Linked List: 34->27->32->55->48->13->27->10->NULL
            Entetr A Node Number We Want to Update: 5
            
            Enter A Data we want to Update  a node : 22
            
            
            After Update 1st node of Linked List: 34->27->32->55->22->13->27->22->NULL

            

*/
