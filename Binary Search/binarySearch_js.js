function binary_search(arr, item)
{
    let  left = 0;
    let right = arr.length;
    //console.log(left, right, item);
    while(left <= right)
    {
        let mid = parseInt(((left + right) / 2));
        if(arr[mid] == item)
        {
            return true;
        }

        if(arr[mid] < item)
        {
            left = mid - 1;
        }
        else
        {
            right = mid + 1;
        }
        return false;
    }
}

let arr = [3, 7, 78, 87, 101];
let item = 78;
if(binary_search(arr, item) == true)
{
    console.log(item + " has found");
}
else{
    console.log(item + " has not found");
}



