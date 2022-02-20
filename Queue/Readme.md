## Queue is collection of elements where two operations are occured. One is to enqueue which functions as adding an element into the collection and another one is dequeue which functions as removing the first element added in the list from the collection. Queue follows FIFO - First In First Out. <br> Eventually we need a circular queue otherwise we can't meet the memory usage potentially.

### Algorithm of Queue for Enqueue:
1. Step 1: Start
2. Step 2: set QueueSize, queue[QueueSize], head=0, tail=-1, totalItem=0
4. Step 4: if (totalItem == QueueSize)<br>
           yes, Queue is full <br>
4. Step 4: if (totalItem < QueueSize) <br>
           yes, tail = (tail + 1) % QueueSize <br>
           queue[tail] = item <br>
                totalItem++
### Algorithm of Queue for Dequeue:
1. Step 1: Start
2. Step 2: if (totalItem < 0)<br>
           yes, print stack is empty <br>
           no, queue[head] = -1 <br>
           head = (head + 1) % QueueSize<br>
           totalItem--

#### time complexity: O(1) in worst case; space compelxity: O(1)