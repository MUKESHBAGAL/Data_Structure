//write a code for Search and Delete Array Element
#include<stdio.h>
int Second_largest(int arr[], int n);

int main() {
    int arr[100], n, i, SE;
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
    SE = Second_largest(arr, n);
    if (SE != -1)
        printf("\n%d is the second largest element at location %d", arr[SE], SE);
    else
        printf("\nWe can't find the second largest element because all elements in the array are the same.\n");

    return 0;
}

int Second_largest(int arr[], int n) {
    if (n < 2) // Array has less than 2 elements
        return -1; // Return -1 indicating second largest cannot be found

    int largest = 0, second_largest = -1; // Initialize largest and second largest indices

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest]) {
            second_largest = largest;
            largest = i;
        } else if (arr[i] != arr[largest]) {
            if (second_largest == -1 || arr[i] > arr[second_largest]) {
                second_largest = i;
            }
        }
    }

    return second_largest;
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
// 4 is Second_largest element at location 3
