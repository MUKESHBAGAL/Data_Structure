#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    
}*START;
void Create_List(int n);
void PrintList();
void Find_Key(int key);
int main(){
    int n,key;
    printf("Enter Number of node in linked list:" );
    scanf("%d",&n);
    Create_List(n);//for using this function to create a  nodes
    PrintList();  //for using this function we print a list
    printf("Enter A Key we want to Find: ");
    scanf("%d",&key);
    Find_Key(key); //for using this function we check a key found or not
}
void Create_List(int n){
    struct node *newNode,*temp;
    int data,i;
    START=(struct node*)malloc(sizeof(struct node));//here memory is allocate
    if(START==NULL)
    printf("\nmMemory can't be allocated ");
    else{
        printf("Input 1: ");
        scanf("%d",&data);//here 1st input data is stored
        START->data=data;
        START->next=NULL;
        
        newNode=START;//newNode contain address of START
        for(i=2;i<=n;i++){
            temp=(struct node*)malloc(sizeof(struct node));//using for loop we allocate multiple memory
            if(temp==NULL){
                printf("\nMemory can not be allocated ");
                break ;
            }
            else{
                printf("Input %d: ",i);
                scanf("%d",&data);//Using for loop we stored Multiple data
                temp->data=data;
                temp->next=NULL;
                
                newNode->next=temp;//newNodes contain address of temp;
                newNode=newNode->next;
            }
        }
    }
}
void PrintList(){
    struct node *temp=START;
    if(temp){//When if expression or condition is non zero then its work i.e temp is not a NULL our while loop is execute
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}
void Find_Key(int key){
     struct node *ptr=START;
    int found = 0; // Flag to track if key is found
    
    if(ptr){//When if expression or condition is non zero then its work i.e temp is not a NULL our while loop is execute
        while(ptr!=NULL){
            if(ptr->data==key){
                printf("%d is present in the given linked List\n", key);
                found = 1; // Set flag to indicate key is found
                break;
            }
            ptr=ptr->next;
        }
        if (!found) { // If key is not found after traversing all nodes
            printf("%d is not present in the given linked List\n", key);
        }
    }
}


// OUTPUT::
//             Enter Number of node in linked list:5
//             Input 1: 1
//             Input 2: 2
//             Input 3: 3
//             Input 4: 4
//             Input 5: 5
//             1->2->3->4->5->NULL
//             Enter A Key we want to Find: 6
//             6 is not present in the given linked List

