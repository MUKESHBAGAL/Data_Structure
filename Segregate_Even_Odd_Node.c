// program for segregate Even and Odd nodes
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*s;

void create_Linked_List(int n);
void Display();
void Segregate_Even_Odd_Node();
int main() {
    int n;
    printf("Enter Number of Nodes in Linked List: ");
    scanf("%d", &n);
    create_Linked_List(n);
    printf("Original Linked List: ");
    Display();
    Segregate_Even_Odd_Node() ;
    printf("Linked List after Segregate Even And Odd Node : ");
    Display();
    return 0;
}

void create_Linked_List(int n) {
    struct node *ptr, *temp;
    int i, data;
    s = malloc(sizeof(struct node));
    if (s == NULL)
        printf("Memory can not be allocated");
    else {
        printf("Input 1: ");
        scanf("%d", &data);
        s->data = data;
        s->next = NULL;
        ptr = s;
        for (i = 2; i <= n; i++) {
            temp = malloc(sizeof(struct node));
            if (temp == NULL)
                printf("Memory can not be allocated");
            else {
                printf("Input %d: ", i);
                scanf("%d", &data);
                temp->data = data;
                temp->next = NULL;
                ptr->next = temp;
                ptr = ptr->next;
            }
        }
    }
}

void Display() {
    struct node *temp = s;
    if (temp) {
        while (temp != NULL) {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

void Segregate_Even_Odd_Node() {
    struct node* temp=s;
    struct node *Evenhead=NULL;
    struct node *Eventail=NULL;
    struct node *Oddhead=NULL;
    struct node *Oddtail=NULL;
    while(temp!=NULL){
        if(temp->data%2==0){
            if(Evenhead==NULL){
                Evenhead=Eventail=temp;
            }
            else{
                Eventail->next=temp;
                Eventail=temp;
            }
        }
        else{
            if(Oddhead==NULL){
                Oddhead=Oddtail=temp;
            }
            else{
                Oddtail->next=temp;
                Oddtail=temp;
            }
        }
        temp=temp->next;
    }
   if (Oddtail != NULL) {
        Oddtail->next = NULL;
    }
    // If there are even nodes, attach the odd list after them
    if (Evenhead != NULL) {
        Eventail->next = Oddhead;
    }
    else { // If no even nodes, then update the start of the list
        Evenhead = Oddhead;
    }
    // Update the start of the list
    s = Evenhead;
}

/*
OUTPUT::

EEnter Number of Nodes in Linked List: 10
Input 1: 1
Input 2: 2
Input 3: 3
Input 4: 4
Input 5: 5
Input 6: 6
Input 7: 7
Input 8: 8
Input 9: 9
Input 10: 10
Original Linked List: 1->2->3->4->5->6->7->8->9->10->NULL
Linked List after Segregate Even And Odd Node : 2->4->6->8->10->1->3->5->7->9->NULL



*/
