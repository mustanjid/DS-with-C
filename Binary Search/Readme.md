# Binary Search is an algorithm normally used to search or find elements in ASC or DESC ordered list. The searching list must be ordered in ASC or DESC manner.

### Algorithm of Binary Search:
1. Step 1: Start
2. Step 2: set left=0, right = size-1
3. Step 3: Run a while loop until left <= right, repeat
4. Step 4: set mid = (left + right)/2;
5. Step 5: if arr[mid] == item
        yes, print item has found
        no,  repeat step 
6. Step 6: if arr[mid] < item <br>
           yes, left = mid - 1
           no, right = mid + 1
7. Step 7: update i
8. Step 8: Print sorted array
9. Step 9: End

#### time complexity: O(n) space compelxity: O(n)