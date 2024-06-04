//Write a code for to check Array is sorted or not
#include<stdio.h>
#include <stdbool.h>
bool IsSorted(int arr[], int n);

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
   if(IsSorted(arr,n)){
       printf("\nGiven Array is sorted\n");
   }
   else{
        printf("\nGiven Array is not sorted\n");
   }
   return 0;
}

bool IsSorted(int arr[], int n){
 for(int i=1;i<n;i++){
     if(arr[i]<arr[i-1])
     return false;
 }
 return true;
}

// OUTPUT::
// Enter the number of elements: 5
// Enter 5 elements in the array:
// arr[0] = 1
// arr[1] = 2
// arr[2] = 3
// arr[3] = 4
// arr[4] = 5
// Given array is: 1 2 3 4 5 
// Given Array is sorted

// Enter the number of elements: 5
// Enter 5 elements in the array:
// arr[0] = 1
// arr[1] = 2
// arr[2] = 5
// arr[3] = 6
// arr[4] = 1
// Given array is: 1 2 5 6 1 
// Given Array is not sorted


