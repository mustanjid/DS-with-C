function insertion_sort(arr)
{
    let i, j, item;
    for(i=1; i < arr.length; i++)
    {
        item = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > item)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = item;
    }
}
let A = [5, 38, 12, 10, 2, 9];
console.log(A);
insertion_sort(A);
console.log(A);