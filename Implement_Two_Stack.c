#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 10

struct Stack {
    int data[MAX_SIZE];
    int Top;
    struct Stack *next;
};

void push(struct Stack *ps, int x) {
    if (ps->Top == MAX_SIZE - 1) {
        printf("\nStack is Overflow\n");
        return;
    }

    ps->Top = ps->Top + 1;
    ps->data[ps->Top] = x;
    printf("____________\n");
    printf("|     %d   |\n", ps->data[ps->Top]);
    printf("|__________|\n");
}

int main(void) {
    struct Stack s1, s2;
    s1.Top = -1;
    s2.Top = -1;
    printf("\nStack 1\n");
    push(&s1, 10);
    push(&s1, 20);
    push(&s1, 30);
    push(&s1, 40);
    push(&s1, 50);
    printf("\n*********************************************************************************************************\n");
    printf("\nStack 2\n");
    push(&s2, 10);
    push(&s2, 20);
    push(&s2, 30);
    push(&s2, 40);
    push(&s2, 50);
    push(&s2, 60);
    push(&s2, 100);
    push(&s2, 200);
    push(&s2, 300);
    push(&s2, 400);
    push(&s2, 500);
    push(&s2, 600);

    return 0;
}

/*
OUTPUT::
        Stack 1
        ____________
        |     10   |
        |__________|
        ____________
        |     20   |
        |__________|
        ____________
        |     30   |
        |__________|
        ____________
        |     40   |
        |__________|
        ____________
        |     50   |
        |__________|
        
        *********************************************************************************************************
        
        Stack 2
        ____________
        |     10   |
        |__________|
        ____________
        |     20   |
        |__________|
        ____________
        |     30   |
        |__________|
        ____________
        |     40   |
        |__________|
        ____________
        |     50   |
        |__________|
        ____________
        |     60   |
        |__________|
        ____________
        |     100   |
        |__________|
        ____________
        |     200   |
        |__________|
        ____________
        |     300   |
        |__________|
        ____________
        |     400   |
        |__________|
        
        Stack is Overflow
        
        Stack is Overflow
*/
