# Insertion sort is an algorithm normally used to sorting elements in a list ASC or DESC manner.

### Algorithm of Insertion sort:
1. Step 1: Start
2. Step 2: Run a for loop from i=1 to array size
3. Step 3: set item = arr[i], j = i - 1
4. Step 4: Run a while loop if j >= 0 and arr[j] > item <br>
           repeat step 5, 6
5. Step 5: set A[j+1] = A[j], j= j-1
6. Step 6: set A[j+1] = item
7. Step 7: update i
8. Step 8: End

#### time complexity: O(n * n) is worst case; space compelxity: O(1)