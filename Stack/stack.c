#include <stdio.h>
#define StackSize 5
int stack[StackSize], top = -1;

void push(int item)
{
    if(top < StackSize - 1)
    {
        top = top +1;
        stack[top] = item;
        printf("item = %d has pushed into Stack \n", item);
    }else{
        printf("Stack is Full \n");
    }
}

int pop()
{
    if(top < 0)
    {
        printf("Stack is empty or exception made \n");
    }else{
        int item = stack[top];
        printf("item = %d has popped from Stack \n", item);
        top = top - 1;
    }
}

int peek()
{
   if(top  < 0)
   {
        printf("Stack is empty or exception made \n");
   }
   return stack[top];
}

int main()
{
    pop();
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    pop();
    push(10);
    printf("Top of the stack = %d \n", peek());
}