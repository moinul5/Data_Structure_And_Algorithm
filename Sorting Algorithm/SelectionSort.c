#include <stdio.h>

SelectionSort(int arr[], int n){
    for(int i=0; i<n;i++)
    {
        int min = i;

        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min]){
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}


int  main()
{
    int n;
    printf("Enter arr number");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n; i++)
    {
        printf("Enter the value of array %d == ",i);
        scanf("%d",&arr[i]);
    }

    SelectionSort(arr,n);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}