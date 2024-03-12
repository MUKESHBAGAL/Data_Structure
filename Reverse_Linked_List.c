#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*s;
void create_Linked_List(int n);
void Display();
void reverse_Linked_List();
int main(){
	int n;
	printf("Enter Number of Node in Linked List:" );
	scanf("%d",&n);
	create_Linked_List(n);
	printf("Orignal Linked List: ");
	Display();
	printf("After reversing the Linked list: ");
	reverse_Linked_List();	
}
void create_Linked_List(int n){
	struct node *ptr,*temp;
	int i,data;
	s=malloc(sizeof(struct node));
	if(s==NULL)
	printf("Memory can not be allocted");
	else{
		printf("Input 1:");
		scanf("%d",&data);
		s->data=data;
		s->next=NULL;
		ptr=s;
		for(i=2;i<=n;i++){
			temp=malloc(sizeof(struct node));
			if(temp==NULL)
			printf("Memory can not be allocted");
			else{
				printf("Input %d:",i);
				scanf("%d",&data);
				temp->data=data;
				temp->next=NULL;
				ptr->next=temp;
				ptr=ptr->next;
				
			}
		}
	}
}
void Display(){
	struct node *temp=s;
	if(temp){
		while(temp!=NULL){
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("NULL\n");
	}
	
	
}
void reverse_Linked_List(){
    struct node *head=NULL;
    struct node *ptr=s;
    struct node *current=s;
    struct node *next=NULL;
    struct node *prv=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prv;
        prv=current;
        current=next;
    }
    head=prv;
    while(head!=NULL){
			printf("%d->",head->data);
			head=head->next;
		}
		printf("NULL\n");
} 

/*
OUTPUT::

Enter Number of Node in Linked List:10
Input 1:1
Input 2:2
Input 3:3
Input 4:4
Input 5:5
Input 6:6
Input 7:7
Input 8:8
Input 9:9
Input 10:10
Orignal Linked List: 1->2->3->4->5->6->7->8->9->10->NULL
After reversing the Linked list: 10->9->8->7->6->5->4->3->2->1->NULL

*/
