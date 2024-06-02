#include<stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
void create(struct node **head,int data){
    struct node *Newnode=malloc(sizeof(struct node));
    Newnode->data=data;
    Newnode->next=*head;
    *head=Newnode;
}
void Display_LL(struct node *head){
    struct node *temp=head;
    if(temp==NULL){
        printf("Given Linked List Is Empty\n");
    }
    else{
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}
void Reverse(struct node *head){
    if(head == NULL){
        return;
    }

    Reverse(head->next);
    printf("%d->",head->data);

}
int main(){
    struct node *list=NULL;
    create(&list,10);
    create(&list,20);
    create(&list,30);
    create(&list,40);
    create(&list,50);
    
    printf("Given Linked List Is: ");
    Display_LL(list);
    printf("After Reversing Linked List : ");
    Reverse(list);
    printf("NULL\n");
}

// OUTPUT::
// Given Linked List Is: 50->40->30->20->10->NULL
// After Reversing Linked List : 10->20->30->40->50->NULL
