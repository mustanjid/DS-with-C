#include <stdio.h>
#define QSize 5
int head=0, tail=0, queue[QSize+1];

void enqueue(int item)
{
    if( (tail+1) % (QSize+1) == head )
    {
        printf("Queue is full \n");
        return;
    }
    queue[tail] = item;
    tail = (tail + 1) % (QSize + 1);
    printf("%d has added into the queue \n", item);
}

int dequeue()
{
    if(head == tail)
    {
        printf("Queue is empty \n");
        return -1;
    }
    printf("%d has removed from the queue \n", queue[head]);
    queue[head] = -1;
    head = (head + 1) % (QSize + 1);
}

void printQueue()
{
    printf("Queue: ");
    for(int j = 0; j < QSize; j++)
    {
        printf("%d ", queue[j]);
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    printQueue();
    dequeue();
    dequeue();
    enqueue(60);
    enqueue(70);
    printQueue();
}