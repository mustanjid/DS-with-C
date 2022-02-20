#include <stdio.h>
#define QSize 5
int head=0, tail=-1, totalItem=0;
int  queue[QSize];

void enqueue(int item)
{
    if(totalItem == QSize)
    {
        printf("Queue is full \n");
        return;
    }

    if (totalItem < QSize)
    {
        tail = (tail+1) % QSize;
        queue[tail] = item;
        printf("%d has been added to queue \n", item);
        totalItem++;
    }
}

int dequeue()
{
    if(totalItem < 0)
    {
        printf("Queue is empty \n");
        return -1;
    }
    printf("%d has dequeued from the queue \n", queue[head]);
    queue[head] = -1;
    head = (head+1) % QSize;
    totalItem--;
}

int peek()
{
    if(totalItem < 0)
    {
        printf("Queue is empty \n");
        return -1;
    }
    return queue[head];
}

void printQueue()
{
    printf("Queue: ");
    for(int j=0; j < 5; j++)
    {
        printf("%d ", queue[j]);
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    dequeue();
    dequeue();
    printQueue();

    printf("Total item: %d \n", totalItem);
    printf("Head/Front of the queue: %d\n", peek());
}