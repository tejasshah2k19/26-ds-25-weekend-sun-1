#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enQueue(int num)
{

    if (rear == SIZE - 1)
    {
        printf("\nQueue Overflow... %d ", num);
    }
    else
    {
        rear++;
        queue[rear] = num;
        printf("\n%d inserted", num);
        if (front == -1)
        {
            front = 0;
        }
    }
}

void deQueue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty : Can not Delete ");
    }
    else if (front == rear)
    {

        printf("\n%d removed ", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\n%d removed ", queue[front]);
        front++;
    }
}

void display()
{
    printf("\nElements in the Queue : ");
    for (int i = front; i <= rear; i++)
    {
        printf(" %d ", queue[i]);
    }
}

int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);

    deQueue(); // 10
    deQueue(); // 20
    enQueue(50);

    display(); // 30 40 50

    enQueue(60);
    return 0;
}