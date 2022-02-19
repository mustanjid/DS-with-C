const StackSize = 5;
let top = -1;
let stack = [];

function push(item)
{
    if(top < StackSize -1)
    {
        top++;
        stack.push(item);
        console.log(item+" has pushed into stack");
    }else{
        console.log("Stack is full");
    }
}

function pop()
{
    if(top < 0)
    {
        console.log("Stack is empty");
    }else{
        console.log(stack[top] + " popped successfully");
        top = top - 1;
        stack.pop(top);
    }
}

function peek()
{
    if(top < 0)
    {
        console.log("Stack is empty")
    }else{
        console.log('Top of the stack '+ stack[top]);
    }
}

push(10);
push(20);
push(30);
push(40);
push(50);
pop();
push(60);
peek();
console.log(top);
console.log(stack);