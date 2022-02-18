#include <stdio.h>

int linear_search(int A[], int search_item, int size)
{
    int i;
    for(i=0; i < size; i++)
    {
        if(A[i] == search_item)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int arr[] = {5, 3, 11, 56, 8};
    int size = 5, key = 56;
    int result = linear_search(arr, size, key);
    if(result)
    {
        printf("Item = %d has found\n", key);
    }else{
        printf("Item = %d has not found\n", key);
    }
}