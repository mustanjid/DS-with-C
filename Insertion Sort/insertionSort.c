#include <stdio.h>

void insertion_sort(int arr[], int size)
{
    int i, j, item;
    for(i=1; i < size; i++)
    {
        item = arr[i];
        j = i - 1;
        while(j >=0 && arr[j] > item)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = item;
    }

    for(i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int A[] = {5, 38, 10, 12, 2}, size=5;
    insertion_sort(A, size);
}