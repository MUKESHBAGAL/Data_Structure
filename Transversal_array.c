#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("\nEnter Number Of Element In Array: ");
    scanf("%d",&n);
    printf("\nEnter %d Element of Array:\n",n);
    for(i=0;i<n;i++){
             printf("arr[%d]=",i);
           scanf("%d",&arr[i]);
        
    }
    printf("\nTransversal Of array\n");
    printf("\nGiven Array Element is:");
    for(i=0;i<n;i++){
            printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}




//OUTPUT::
	//Enter Number Of Element In Array: 5

	//Enter 5 Element of Array:
	//arr[0]=1
	//arr[1]=2
	//arr[2]=3
	//arr[3]=4
	//arr[4]=5

	//Transversal Of array

	//Given Array Element is:1 2 3 4 5 

