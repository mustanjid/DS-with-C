let i, j, temp;
let arr = [4, 3, 5, 2, 1];

function selection_sort(arr, size)
{
    for(i=0; i < size; i++)
    {
        for(j=i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

selection_sort(arr, 5);
console.log(arr);