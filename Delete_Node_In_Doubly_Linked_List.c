//Thiis program for delete node in doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*prv;
    int data;
    struct node* next;
}*s;
void Transversal(int n);
void PrintLinkedList();
void Delete_Node_In_Doubly_LL(int location);
int main(){
    int n,data,location;
    printf("Enter Number of linked List :");
    scanf("%d",&n);
    Transversal(n);
    PrintLinkedList();
   
    printf("Enter Location we want to Delete a  node: ");
    scanf("%d",&location);
    if(location<=n){
        Delete_Node_In_Doubly_LL(location);
        PrintLinkedList();
    }
    else{
        printf("Plese Enter valid location\n");
    }
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
            s->prv=NULL;
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
                            temp->prv=ptr;
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
void Delete_Node_In_Doubly_LL( int location) {
  struct node *ptr = s;
    struct node *temp = s; 
    struct node *node ;
    for (int i = 1; i < location; i++) {
        temp = ptr;
        ptr = ptr->next;
          if (ptr == NULL) {
            printf("Invalid location.\n");
            return;
        }
        node=ptr->next;
         if (node == NULL) {
            printf("Invalid location.\n");
            return;
        }
      
    }
    
   temp->next=node;
   node->prv=temp;
    free(ptr);
    
    while(ptr!=NULL){
        temp=ptr;
        ptr=ptr->next;
    }

}

/*
OUTPUT::

Enter Number of linked List :5
Input Linked List 1: 1
Input Linked List 2: 2
Input Linked List 3: 3
Input Linked List 4: 4
Input Linked List 5: 5
1->2->3->4->5->NULL
Enter Location we want to Delete a  node: 3
1->2->4->5->NULL


*/
