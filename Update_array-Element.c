//update array element
#include <stdio.h>
int main() {
    int array[100], n ,i,pos,x;
    printf("\nEnter Number of Element in Array :"); //in this printf satatement says how many number of element in in our given array
    scanf("%d",&n);
    printf("\nEnter %d Element in array \n",n);//in this printf statement says enter number of element enter one bye one
    for(i=0;i<n;i++){
        //in this for lop we create a array 
        printf("array[%d]=",i);
        scanf("%d",&array[i]);
    }
    printf("\nEnter Location we want update a array: ");
    scanf("%d",&pos);//pos is a postion of a array we want update here
    printf("\nEnter a element we want to update as per location :");
    scanf("%d",&x);//x is a upadte element
    
    array[pos]=x;
    printf("\nDisplay array as per update : ");
     for(i=0;i<n;i++){
       
        printf("%d ",array[i]);
        
    }
    printf("\n");
    return 0;
}




//OUTPUT: 
//	Enter Number of Element in Array :5
//
//        Enter 5 Element in array 
//	array[0]=1
//	array[1]=2
//	array[2]=3
//	array[3]=4
//	array[4]=5

//	Enter Location we want update a array: 3
//
//	Enter a element we want to update as per location :6

//	Display array as per update : 1 2 3 6 5 

