#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*s;

void create_Linked_List(int n);
void Display();
void Duplicate_Node_Count();
int main() {
    int n;
    printf("Enter Number of Nodes in Linked List: ");
    scanf("%d", &n);
    create_Linked_List(n);
    printf("Original Linked List: ");
    Display();
    Duplicate_Node_Count();
    printf("Linked List after removing duplicates: ");
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

void Duplicate_Node_Count() {
    struct node *temp = s;
    struct node *current, *prv;
    while (temp != NULL && temp->next != NULL) {
        current = temp;
        while (current->next != NULL) {
            if (temp->data == current->next->data) {
                prv = current->next;
                current->next = current->next->next;
                free(prv);
            } else {
                current = current->next;
            }
        }
        temp = temp->next;
    }
}

/*
OUTPUT::

Enter Number of Nodes in Linked List: 10
Input 1: 1
Input 2: 2
Input 3: 3
Input 4: 1
Input 5: 2 
Input 6: 4
Input 7: 53
Input 8: 4
Input 9: 1
Input 10: 10
Original Linked List: 1->2->3->1->2->4->53->4->1->10->NULL
Linked List after removing duplicates: 1->2->3->4->53->->NULL

*/
