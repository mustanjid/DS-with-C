# Stack is collection elements where two operations are occured. One is to push which functions as adding an element in collection and another one is pop which functions as removing the latest added element from the collection. Stack follows LIFO - Last In First Out.

### Algorithm of Stack for PUSH:
1. Step 1: Start
2. Step 2: set StackSize, arr[StackSize]
3. Step 3: set top = -1
4. Step 4: if top  < StackSize - 1 <br>
           yes, top = top + 1 <br>
                arr[top] = item <br>
           no, print Stack is full
### Algorithm of Stack for POP:
1. Step 1: Start
2. Step 2: if (top < 0)<br>
           yes, print stack is empty <br>
           no, item = arr[top] <br>
               top = top - 1;

#### time complexity: O(1) is worst case; space compelxity: O(1)