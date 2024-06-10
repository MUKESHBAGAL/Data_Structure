//Write a code for a left rotate arry by K position
#include<stdio.h>
#include <stdbool.h>
void  Left_Rotate(int arr[], int n);

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
    printf("\nHow many position we want to left rotate: ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
        Left_Rotate(arr, n);
    printf("\nAfter Left Rotate array %d position: ",k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void  Left_Rotate(int arr[], int n){
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
// How many position we want to left rotate: 3

// After Left Rotate array 3 position: 4 5 1 2 3 



