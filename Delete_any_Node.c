//This Program for a Delete any Node of Linked List

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
int  PrintLinkedList(struct node*head){
    struct node *temp;
    int count=0;
    temp=head;
 //travers a linked list 
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
            count++;
        }
    printf("NULL\n");
    return count;
}
void Delete_last_Node(struct node*head,int count,int location){
    struct node *temp,*ptr;
    ptr=head;
    temp=NULL;
    if(location<=count){
        for(int i=1;i<location;i++){
            temp=ptr;
            ptr=ptr->next;
        }
      
        temp->next=ptr->next;
        free(ptr);
    }
    else{
        printf("\nSomething is error");
    }
}
int main(){
    struct node *list=NULL;
    int location;
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
    int count = PrintLinkedList(list);
    printf("\nEnter location  we want delete a node: ");
    scanf("%d",&location);
    printf("\nAfter %d node is Delete: ",location);
    Delete_last_Node(list,count,location);
    PrintLinkedList(list);
    return 0;
}





/*OUTPUT:
            Orignial Linked List: 10->27->13->48->55->32->27->34->NULL
            
            Enter location  we want delete a node: 3
            
            After 3 node is Delete: 10->27->48->55->32->27->34->NULL
*/
