#include <stdio.h>

int binary_search(int arr[], int item, int size)
{
    int left=0, right=size-1, mid;
    while(left <= right)
    {
        mid = (left + right)/2;
        if(arr[mid] == item)
        {
            return 1;
        }else{
            return 0;
        }

        if(arr[mid] < item)
        {
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
}

int main()
{
    int arr[] = {3, 7, 78, 89, 100}, item = 78;
    int result = binary_search(arr, item, 6);
    if(result)
    {
        printf("Item %d has found\n", item);
    }else{
        printf("Item %d has not found\n", item);
    }
}