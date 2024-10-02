void quickSort(int array[], int start, int end)
{
    if (end <= start) return;

    int pivot = partition(array, start, end);
    quickSort(array, start, pivot - 1);
    quickSort(array, pivot + 1, end);
}