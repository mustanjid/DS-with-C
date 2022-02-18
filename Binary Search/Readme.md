# Binary Search is an algorithm normally used to search or find elements in ASC or DESC ordered list. The searching list must be ordered in ASC or DESC manner.

### Algorithm of Binary Search:
1. Step 1: Start
2. Step 2: set left=0, right = size-1
3. Step 3: Run a while loop until left <= right, repeat
4. Step 4: set mid = (left + right)/2;
5. Step 5: if arr[mid] == item <br>
        yes, print item has found <br>
        no,  repeat step 
6. Step 6: if arr[mid] < item <br>
           yes, left = mid - 1
           no, right = mid + 1
7. Step 7: Print the item
8. Step 9: End

Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.

#### time complexity: O(log n) space compelxity: O(1)