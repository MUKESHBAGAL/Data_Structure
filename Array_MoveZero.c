//Write a code for Move Zero at a last of Array
#include<stdio.h>
#include <stdbool.h>
void  Move_Zero(int arr[], int n);

int main() {
    int arr[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Given array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    Move_Zero(arr, n);
    printf("\nAfter reversing array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void  Move_Zero(int arr[], int n){
    int count=0,temp,i;
    for( i=0;i<n;i++){
        if(arr[i]!=0){
            temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
            
        }
    }
}

// OUTPUT::
// Enter the number of elements: 5
// Enter 5 elements in the array:
// arr[0] = 1
// arr[1] = 0
// arr[2] = 2
// arr[3] = 0
// arr[4] = 3
// Given array is: 1 0 2 0 3 
// After reversing array: 1 2 3 0 0 



