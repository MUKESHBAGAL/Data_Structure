//Write a code for a Reverse Array Element
#include<stdio.h>

int Reverse_Array(int arr[], int n);

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
    Reverse_Array(arr, n);
    printf("\nAfter reversing array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int Reverse_Array(int arr[], int n){
    int i, temp;
    for(i=0; i<n/2; i++){ // Corrected loop range
        temp = arr[i];
        arr[i] = arr[n-i-1]; // Fixed index for swapping
        arr[n-i-1] = temp;
    }
    return 0; // Added return statement
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
// After reversing array: 5 4 3 2 1 
