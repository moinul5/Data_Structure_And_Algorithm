#include <stdio.h>


int partition(int array[], int start, int end)
{
    int pivot = array[end]; // Last element as pivot
    int i = start - 1;
    
    // Change the comparison to sort in descending order
    for (int j = start; j <= end - 1; j++)
    {
        if (array[j] > pivot) // Sorting in descending order
        {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    
    // Swap the pivot element with the element at index i+1
    i++;
    int temp = array[i];
    array[i] = array[end];
    array[end] = temp;
    
    return i;
}

void quickSort(int array[], int start, int end)
{
    if (end <= start) return;

    int pivot = partition(array, start, end);
    quickSort(array, start, pivot - 1);
    quickSort(array, pivot + 1, end);
}
int main()
{
    int array[] = {1,2,3,4,5,6,7,8};
    int length = sizeof(array) / sizeof(array[0]);
    
    quickSort(array, 0, length - 1);
    
    // Print sorted array in descending order
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}
