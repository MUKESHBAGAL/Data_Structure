//insertion of array in zero index
#include<stdio.h>
int main(){
    int arr[100],n,i,x;
    printf("\nEnter Number Number of array; ");
    scanf("%d",&n);
    printf("\nEnter %d Element in array:\n",n);
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
        printf("\nEnter array element we want insert at zero index: ");
        scanf("%d",&x);
         for(i=n-1;i>=0;i--){
             //we shift element right side and increase value of n 
         arr[i+1]=arr[i];//here we shift element incresing the index
        }
        arr[0]=x;//our program purpose we insert element in zero index
        n++;
       printf("\nDisplay array after one element insert in index zero; ");//after perform all operation print array 
        for(i=0;i<n;i++){
       printf("%d ",arr[i]);
       } 
       printf("\n");
       
       return 0;
}



OUTPUT::
//	Enter Number Number of array; 5

//	Enter 5 Element in array:
//	arr[0]=1
//	arr[1]=2
//	arr[2]=3
//	arr[3]=4
//	arr[4]=5

//	Enter array element we want insert at zero index: 3

//	Display array after one element insert in index zero; 3 1 2 3 4 5 
