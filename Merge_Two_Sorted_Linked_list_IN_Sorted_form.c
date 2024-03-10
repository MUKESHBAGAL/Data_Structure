// merge two sorted Linked list in sorted form
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
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
void  merge_linked_List(struct node **aa,struct node **bb){
    struct node *head=NULL;
    struct node *tail=NULL;
    struct node *a=*aa;
    struct node *b=*bb;
    // In if Else condition we check small data in Two list Which one is small then head contain this node address or head pointing this node
        if(a->data<=b->data){
            head=tail=a;
            a=a->next;
        }
        else{
            head=tail=b;
            b=b->next;
        }
        
        while(a!=NULL && b!=NULL){
            if(a->data<=b->data){
                tail->next=a;
                tail=a;
                a=a->next;
            }
            else{
                tail->next=b;
                tail=b;
                b=b->next;
            }
        }
        // here which one list is empty and other not empty then non empty list as it is added
        tail->next=a ? a:b;
         
        	 struct node *temp=head;
        	 while(temp!=NULL){
           		 printf("%d->",temp->data);
           		 temp=temp->next;
      	  	}
      			printf("NULL\n");
      
}
void main(){
     struct node *list1=NULL;
     struct node *list2=NULL;
      create_Linked_List(&list1,10);
      create_Linked_List(&list1,30);
      create_Linked_List(&list1,50);
      create_Linked_List(&list1,70);
      create_Linked_List(&list1,90);
      create_Linked_List(&list1,110);
     
      create_Linked_List(&list2,20);
      create_Linked_List(&list2,40);
      create_Linked_List(&list2,60);
      create_Linked_List(&list2,80);
      create_Linked_List(&list2,100);
      create_Linked_List(&list2,120);
      printf("1st Linked list is :");
      PrintLinkedList(list1);
      printf("2nd Linked list is :");
      PrintLinkedList(list2);
      printf("After Merge two sorted Linked list: ");
      merge_linked_List(&list1,&list2);


}

/*
OUTPUT::

        1st Linked list is :10->30->50->70->90->110->NULL
        2nd Linked list is :20->40->60->80->100->120->NULL
        After Merge two sorted Linked list: 10->20->30->40->50->60->70->80->90->100->110->120->NULL
        
*/
