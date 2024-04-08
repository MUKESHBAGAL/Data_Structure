#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node *next;
};
struct node *head=NULL;

void push(int data){
    // struct node *head=NULL;
    struct node *temp=malloc(sizeof(struct node));
    if(temp==NULL)
    printf("Memory not allocated");
    else{
        temp->data=data;
        temp->next=head;
         head=temp;
    }
   
}
void Display(){
    struct node* temp=head;
    if(temp){
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void pop(){
    struct node *temp=head;
    if(temp==NULL)
    printf("Stack is Empty");
    else{
        printf("Poped Element= %d\n",temp->data);
        head=temp->next;
        free(temp);
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    Display();
    
    pop();
    pop();
    pop();
    pop();
    pop();
    
    Display();
    
    return 0;
}
/*
OUTPUT::
        60->50->40->30->20->10->
        Poped Element= 60
        Poped Element= 50
        Poped Element= 40
        Poped Element= 30
        Poped Element= 20
        10->

*/
