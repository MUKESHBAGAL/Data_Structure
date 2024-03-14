#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*s;
void create_Linked_List(int n);
void Display();
int Duplicate_Node_Count();
int main(){
	int n,count;
	printf("Enter Number of Node in Linked List:" );
	scanf("%d",&n);
	create_Linked_List(n);
	printf("Orignal Linked List: ");
	Display();
        count=Duplicate_Node_Count();
    
	if(count==0){
        printf("\nNO Duplicate Node is Available\n");
    }
    else 
        printf("\n%d duplicate Node In Linked List\n",count);
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
int Duplicate_Node_Count(){
    int count =0;
    struct node *ptr=s;
    struct node *current=s;
    struct node *temp=s;
    while(temp->next!=NULL){
        ptr=temp->next;
        while(ptr!=NULL){  
            if(temp->data==ptr->data){
                  count++;
            }
                ptr=ptr->next;
        }
            temp=temp->next;
    }
    return count;
} 

/*
OUTPUT::

EEnter Number of Node in Linked List:10
Input 1:1
Input 2:2
Input 3:3
Input 4:4
Input 5:1
Input 6:2
Input 7:3
Input 8:5
Input 9:6
Input 10:1
Orignal Linked List: 1->2->3->4->1->2->3->5->6->1->NULL

5 duplicate Node In Linked List

*/
