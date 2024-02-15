//Traversal and Print Linked List!! 
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*s;
void Transversal(int n);
void PrintLinkedList();
void PrintlastNode();
int main(){
    int n;
    printf("Enter Number of linked List :");
    scanf("%d",&n);
    Transversal(n);
    PrintLinkedList();
    PrintlastNode();
    
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
void PrintlastNode(){
	 struct node *temp;
    temp=s;
    if(temp){
        while(temp->next!=NULL)
            temp=temp->next;
        
    }
	printf(" Last Node In A Linked List Is a %d\n",temp->data);


}






OUTPUT::
	Enter Number of linked List :5
	Input Linked List 1: 1
	Input Linked List 2: 2
	Input Linked List 3: 3
	Input Linked List 4: 4
	Input Linked List 5: 5
	1->2->3->4->5->NULL
 	Last Node In A Linked List Is a 5

