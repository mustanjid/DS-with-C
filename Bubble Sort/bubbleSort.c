#include <stdio.h>

void bubble_sort(int arr[], int size)
{
    int i, j, temp;
    for(i=0; i < size; i++)
    {
        for(j=0; j < size; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
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
    int arr[] = {4, 2, 5, 1, 2}, size=5;
    bubble_sort(arr, size);
}