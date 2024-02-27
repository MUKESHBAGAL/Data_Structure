//Traversal and Print Linked List!! 
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*s;
void Transversal(int n);
void PrintLinkedList();
void Insert_after_ant_Node(int count,int data,int location);
int main(){
    int n,data,location;
    printf("Enter Number of linked List :");
    scanf("%d",&n);
    printf("Enter a location after a we want insert A Node: ");
    scanf("%d",&location);
    printf("Enter a data of node we insert after %d nodes :",location);
    scanf("%d",&data);
    Transversal(n);
    printf("\nBefore the insert Node: ");
    PrintLinkedList();
    printf("\nAfter insert a Node: ");
    Insert_after_ant_Node(n,data,location);
    
    return 0;
}
void Transversal(int n){
    struct node *temp,*ptr;
    s=(struct node*)malloc(sizeof(struct node));
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
void Insert_after_ant_Node(int count,int data,int location){
    struct node *temp,*ptr;
    temp=s;
    ptr=NULL;
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    if(count<location)
    printf("Something is error! plese Correct");
    else{
        for(int i=1;i<location;i++){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        ptr=temp;
        while(ptr!=NULL){
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL\n");
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
    
    
    // OUTPUT::

            // Enter Number of linked List :5
            // Enter a location after a we want insert A Node: 1
            // Enter a data of node we insert after 1 nodes :100
            // Input Linked List 1: 2
            // Input Linked List 2: 3
            // Input Linked List 3: 4
            // Input Linked List 4: 5
            // Input Linked List 5: 6
            
            // Before the insert Node: 2->3->4->5->6->NULL
            
            // After insert a Node: 2->100->3->4->5->6->NULL


  
