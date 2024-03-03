// In this program we find Intersection point of linked list
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
int PrintLinkedList(struct node*head){
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
void  Intersection_point(struct node **aa,struct node **bb,int c1,int c2){
    struct node *head1=*aa;
    struct node *head2=*bb;
    int i,d;
       if(c1>c2){
           d=c1-c2;
           for(i=0;i<d;i++)
           head1=head1->next;
       }
       else{
           d=c2-c1;
           for(i=0;i<d;i++)
           head2=head2->next;
       }
    
        while(head1->data!=head2->data){
            head1=head1->next;
            head2=head2->next;
        }
        
            if(head1=head2)
            printf("\nThe Intersection point of a Linked List is : %d\n",head1->data);
            else
            printf("\nNo Intersection point in linked list");
      
}
void main(){
     struct node *list1=NULL;
     struct node *list2=NULL;
      create_Linked_List(&list1,10);
      create_Linked_List(&list1,30);
      create_Linked_List(&list1,50);
      create_Linked_List(&list1,70);
      create_Linked_List(&list1,90);
      create_Linked_List(&list1,100);
     
      create_Linked_List(&list2,20);
      create_Linked_List(&list2,40);
      create_Linked_List(&list2,60);
      create_Linked_List(&list2,80);
      create_Linked_List(&list2,100);

      printf("1st Linked list is :");
      int c1=PrintLinkedList(list1);
      printf("2nd Linked list is :");
      int c2= PrintLinkedList(list2);
      Intersection_point(&list1,&list2,c1,c2);


}

/*
OUTPUT::
        1st Linked list is :10->30->50->70->90->100->NULL
        2nd Linked list is :20->40->60->80->100->NULL
        
        The Intersection point of a Linked List is : 100  
        
*/
