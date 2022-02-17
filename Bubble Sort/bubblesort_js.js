let arr = [4, 2, 5, 3, 3];

function bubbleSort(arr, size)
{
    let i, j, temp;
    for(i=0; i < size; i++)
    {
        for(j=0; j < size; j++)
        {
            if(arr[j+1]  < arr[j])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

bubbleSort(arr, 5);
console.log(arr);