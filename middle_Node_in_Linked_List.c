//This Program for a Count Number of Nodes In a Given Linked List
//in this program Number of node is odd then exactly mid node is printed i.e Number of node =7 then middle node is 4 but
//in a even condition means Number of node =8 then  middle node is a 5 
#include<stdio.h>
#include<stdlib.h>
// linked list node structure
struct node{
    int data;
    struct node *next;
};
void create(struct node**head,int data){
    // create a new node and memory is allocate
        struct node *newNode=malloc(sizeof(struct node*));
        newNode->data=data;
        newNode->next=*head;
        
        *head=newNode;
}
int PrintLinkedList(struct node*head){
    struct node *temp;
    int count=0;
    temp=head;
 //travers a linked list and maintain a count
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
            count++;//increment in count
        }
    printf("NULL\n");
    return count;
}
int PrintMiddleNode(struct node*head ,int count){
    struct node *temp;
    
    temp=head;
    // here count is a number of node in a linked list and we use for loop in for loop count/2 for a middle node 
       for(int i=0;i<count/2;i++){
           temp=temp->next;
       }
       return temp->data;//we return temp point after loop condition is completed 
}
int main(){
    struct node *list=NULL;
    int count,data;
    // calling a count function
    create(&list ,10);
    create(&list ,27);
    create(&list ,13);
    create(&list ,48);
    create(&list ,55);
    create(&list ,32);
    create(&list ,27); 
    create(&list ,34);
    // calling a PrintLinkedList function and return Value Stored in a count variable
    count=PrintLinkedList(list);
    data=PrintMiddleNode(list ,count);//here we passing count means number of node in linked list and we stored return data in  a data variable 
    printf("Middle Node of  Linked List is =%d\n",data);
    return 0;
}





// OUTPUT:
//       34->27->32->55->48->13->27->10->NULL
//       Middle Node of  Linked List is =48

