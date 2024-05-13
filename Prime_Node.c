// This Program for Print even node of linked list
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
void PrintLinkedList(struct node*head){
    struct node *temp;
    temp=head;
 //travers a linked list and maintain a count
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
    printf("NULL\n");
}
void PrintPrimeNode(struct node* head) {
    struct node *temp;
    temp = head;
    // traverse the linked list and check if each node's data is prime
    while (temp != NULL) {
        int isPrime = 1; // assume the number is prime
        for (int i = 2; i < temp->data; i++) {
            if (temp->data % i == 0) {
                isPrime = 0; // if number is divisible by any number other than 1 and itself, it's not prime
                break;
            }
        }
        if (isPrime) {
            printf("%d->", temp->data); // print the prime number
        }
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    struct node *list=NULL;
    // calling a count function
    create(&list ,3);
    create(&list ,27);
    create(&list ,19);
    create(&list ,48);
    create(&list ,5);
    create(&list ,32);
    create(&list ,59); 
    create(&list ,34);
    // calling a PrintLinkedList function and return Value Stored in a count variable
    printf("\nOrignial Linked List: ");
    PrintLinkedList(list);
    printf("\n\nOnly Prime node of Linked List: ");
    PrintPrimeNode(list);
    
    return 0;
}





/*OUTPUT:
            Orignial Linked List: 34->59->32->5->48->19->27->3->NULL
            
            
            Only Prime node of Linked List: 59->5->19->3->NULL
*/

