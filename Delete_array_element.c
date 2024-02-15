#include<stdio.h>
int main(){
    int arr[100],n,i,pos=-1;
    printf("\nEnter The Number of Element in array: ");// here we write printf statements for enter how many element in array
    scanf("%d",&n);
    printf("\nEnter %d element in  array: \n",n);
    for(i=0;i<n;i++)//here we enter array element i.e declare for loop for array
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter a location we want delete a element: ");//here enter location for delete array element
    scanf("%d",&pos);
    for(i=pos;i<n;i++){//logoic for delete array element
        arr[i]=arr[i+1];
    }
    n=n-1;//decrese a value of n because we delete element the size of array is decrease by 1
    printf("\nAfter delete a array element: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}



// OUTPUT::

            // Enter The Number of Element in array: 8
            // Enter 8 element in  array: 
            // arr[0]=1
            // arr[1]=2
            // arr[2]=3
            // arr[3]=4
            // arr[4]=5
            // arr[5]=6
            // arr[6]=7
            // arr[7]=8
            // Enter a location we want delete a element: 4
            // After delete a array element: 1 2 3 4 6 7 8 

