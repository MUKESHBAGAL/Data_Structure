//insertion of array in zero index
#include<stdio.h>
int main(){
    int arr[100],n,i,x,pos=-1;
    printf("\nEnter Number Number of array; ");
    scanf("%d",&n);
    printf("\nEnter %d Element in array:\n",n);
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
        printf("Enter Location we want to Insert a New Element: ");
        scanf("%d",&pos);
        printf("\nEnter array element we want insert at %d given location: ",pos);
        scanf("%d",&x);
         for(i=n-1;i>=pos;i--){
             //we shift element right side and increase value of n 
         arr[i+1]=arr[i];//here we shift element incresing the index
        }
        arr[pos]=x;//our program purpose we insert element in zero index
        n++;
       printf("\nDisplay array after one element insert in index zero; ");//after perform all operation print array 
        for(i=0;i<n;i++){
       printf("%d ",arr[i]);
       } 
       printf("\n");
       
       return 0;
}



//OUTPUT::
        // Enter Number Number of array; 5
        // Enter 5 Element in array:
        // arr[0]=1
        // arr[1]=2
        // arr[2]=3
        // arr[3]=4
        // arr[4]=5
        // Enter Location we want to Insert a New Element: 3
        // Enter array element we want insert at 3 given location: 6
        // Display array after one element insert in index zero; 1 2 3 6 4 5 

