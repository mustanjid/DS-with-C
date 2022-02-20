const Qsize = 5;
let head=0, tail=-1, totalItem=0;
let queue = [];

function enqueue(item)
{
    if(totalItem == Qsize)
    {
        console.log("Queue is full");
        return;
    }

    if(totalItem < Qsize)
    {
        tail = parseInt((tail + 1) % Qsize);
        queue[tail] = item;
        totalItem++;
        console.log(item + " has been added to queue");
    } 
}

function dequeue()
{
    if(totalItem <= 0)
    {
        console.log("Queue is empty");
        return;
    }else{
        console.log(queue[head]+" has been removed from the queue");
        //queue.splice(head, 1);
        queue[head] = -1;
        head = parseInt((head + 1) % Qsize);
        totalItem--;
    }
    
}

function peek()
{
    if(totalItem <= 0)
    {
        console.log("Queue is empty");
    }else{
        return queue[head];
    }
}

dequeue();
enqueue(10);
enqueue(20);
enqueue(30);
dequeue();
enqueue(40);
enqueue(50);
console.log(tail);
enqueue(60);
dequeue();
dequeue();
enqueue(70);
dequeue();
dequeue();
console.log("Head of the queue: "+ peek());
console.log(queue);