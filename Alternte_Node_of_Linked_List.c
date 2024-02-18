// Print alternate node of linked list 
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*s;
void Transversal(int n);
void PrintLinkedList();
void PrintAlternateNode();
int main(){
    int n;
    printf("Enter Number of linked List :");
    scanf("%d",&n);
    Transversal(n);
    printf("\nOrignal Linked List is Printed\n\n");
    PrintLinkedList();
    printf("\nAlternate of  Linked List is Printed\n\n");
    PrintAlternateNode();
    return 0;
}
void Transversal(int n){
    struct node *temp,*ptr;
    s=(struct node*)malloc(sizeof(struct node));//memroy is allocated
    if(s==NULL){
    printf("Our Linked List is Empty");
   
    }
    else{
            int data,i;
            printf("Input Linked List 1: ");
            scanf("%d",&data);
            s->data=data;
            s->next=NULL;//here we store 1st list data 
            ptr=s;//1st data store in a ptr 
            
                for(i=2;i<=n;i++){//using a for loop we store a multiple data 
                    temp=(struct node*)malloc(sizeof(struct node));
                    if(temp==NULL){
                    printf("Our Linked List is Empty");
                    break;
                    }
                    else{
                          
                            printf("Input Linked List %d: ",i);
                            scanf("%d",&data);
                            temp->data=data;
                            temp->next=NULL;
                            
                            ptr->next=temp;//our ptr is a 1st list after a ptr 2nd list is connected to a ptr and in a ptr next is carry next list address 
                            ptr=ptr->next;
                    }
                }
    }
}
void PrintLinkedList(){
    struct node *temp;
    temp=s;
    if(temp){
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
    }
    printf("NULL\n");
}
void PrintAlternateNode(){
    struct node *temp;
    temp=s;
    if(temp){
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next->next;
        }
    }
    printf("NULL\n");
}
    
    
    // OUTPUT::

            // Enter Number of linked List :10
            // Input Linked List 1: 11
            // Input Linked List 2: 12
            // Input Linked List 3: 14
            // Input Linked List 4: 1
            // 3Input Linked List 5: 2
            // Input Linked List 6: 32
            // Input Linked List 7: 99
            // Input Linked List 8: 88
            // Input Linked List 9: 45
            // Input Linked List 10: 100
            
            // Orignal Linked List is Printed
            
            // 11->12->14->1->2->32->99->88->45->100->NULL
            
            // Alternate of  Linked List is Printed
            
            // 11->14->2->99->45->NULL

  
