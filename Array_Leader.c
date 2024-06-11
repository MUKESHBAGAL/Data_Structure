//Write a code for leader in array
#include<stdio.h>
#include <stdbool.h>
void  Leader_Element(int arr[], int n);

int main() {
    int arr[100], n, i,k;
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
    Leader_Element(arr, n);
    printf("\n");
    return 0;
}
void  Leader_Element(int arr[], int n){
    int Leader_Element,i;
    Leader_Element=arr[n-1];
    printf("\nLeader elemet are : %d",Leader_Element);
    for(i=n-2;i>=0;i--){
        if(arr[i]>Leader_Element){
              Leader_Element=arr[i];
    printf(" %d",Leader_Element);
        }
        
    }
    
}

// OUTPUT::
// Enter the number of elements: 5
// Enter 5 elements in the array:
// arr[0] = 5
// arr[1] = 2
// arr[2] = 3
// arr[3] = 1
// arr[4] = 2
// Given array is: 5 2 3 1 2 
// Leader elemet are : 2 3 5




