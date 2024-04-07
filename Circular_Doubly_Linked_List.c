#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* prev;
    int data ;
    struct node* next;
};
void create(struct node **head ,int data){
    
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->prev=*head;
    newNode->next=*head;
    
    if(*head==NULL){
        *head=newNode;
        newNode->prev=*head;
        newNode->next=*head;
    }
    else{
        struct node*temp=*head;
        while(temp->next!=*head)
         temp=temp->next;
         temp->next=newNode;
          newNode->prev=temp;
         newNode->next=*head;
        
    }
}

void Display(struct node* head){
    struct node *temp=head;
    do{
        printf("%d->",temp->data);
        temp=temp->next;
    }while(temp!=head);
    printf("NULL\n");
    
}
int main(){
    struct node *list=NULL;
    create(&list ,10);
    create(&list ,20);
    create(&list ,30);
    create(&list ,40);
    create(&list ,50);
    create(&list ,60);
    
    Display(list);
}




/*
OUTPUT:: 
          10->20->30->40->50->60->NULL
*/
