// write a code for find largest Element
#include<stdio.h>
int  Largest_Element(int arr[],int n);
int main(){
    int arr[100],n,i,SE;
    printf("Enter a number of of element: ");
    scanf("%d",&n);
    printf("Enter %d element in array \n",n);
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("GIVEN ARRAY IS : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    SE=Largest_Element(arr,n);
    printf("\n%d is largest element at location %d",arr[SE],SE);
    printf("\n");
    
    return 0;
}
int Largest_Element(int arr[], int n) {
    int i, largest = 0;
    for (i = 1; i < n; i++) {
        if (arr[i] > arr[largest])
            largest = i;
    }
    return largest;
}

// OUTPUT::
// Enter a number of of element: 5
// Enter 5 element in array 
// arr[0]=1
// arr[1]=2
// arr[2]=3
// arr[3]=4
// arr[4]=5
// GIVEN ARRAY IS : 1 2 3 4 5 
// 5 is largest element at location 4


