#include <stdio.h>

void selection_sort(int arr[], int size)
{
    int i, j, temp;
    for(i=0; i < size; i++)
    {
        for(j=i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {4, 3, 5, 2, 1};
    int size = 5;
    selection_sort(arr, size);
}