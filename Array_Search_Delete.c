// write a code for search and delete array element
#include<stdio.h>
int  Search_Delete_Element(int arr[],int n,int x);
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
    printf("\nEnter a Element we want to search and delete: ");
    scanf("%d",&SE);
    
    if(Search_Delete_Element(arr,n,SE)){
            n=n-1;
            printf("After Search and Delete element: ");
            for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        printf("Element not found !!\n");
    }
    
}
int Search_Delete_Element(int arr[], int n, int x) {
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
            break;
        }
    }
    if (found) {
        for (int j = i; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        return 1; // Element found and deleted
    } else {
        return 0; // Element not found
    }
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
// Enter a Element we want to search and delete: 3
// After Search and Delete element: 1 2 4 5 


