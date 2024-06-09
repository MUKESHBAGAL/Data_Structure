//Write a code for a left rotate arry by one position
#include<stdio.h>
#include <stdbool.h>
void  Left_Rotate_by1(int arr[], int n);

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
    Left_Rotate_by1(arr, n);
    printf("\nAfter Left Rotate array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void  Left_Rotate_by1(int arr[], int n){
    int temp,i;
    temp=arr[0];
    for(i=0;i<n;i++)
        arr[i]=arr[i+1];
        
        arr[n-1]=temp;
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
// After Left Rotate array: 2 3 4 5 1 



