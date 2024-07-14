#include <stdio.h>

insertionSort(int arr[], int n)
{
    for(int i=1; i<n;i++){
        int temp = arr[i];
        int j= i-1;
        for(j; j>=0 && temp<arr[j];j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;

    }
}

int main(){
    int n;
    printf("Enter array number");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n; i++)
    {
        printf("Enter the value of array %d == ",i);
        scanf("%d",&arr[i]);
    }

    insertionSort(arr,n);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

}