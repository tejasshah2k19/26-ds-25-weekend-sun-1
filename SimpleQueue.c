#include <stdio.h>
#include <conio.h>

#define SIZE 5

int queue[SIZE];

int front = -1;
int rear = -1;

void enQueue(int num)
{

    if (rear == SIZE - 1)
    {
        printf("\nQueue overflow....");
    }
    else
    {
        rear++;
        queue[rear] = num;
        // first time insertion
        if (front == -1)
        {
            front = 0;
        }
    }
}

void deQueue()
{
}

void display()
{
    if (front == -1)
    {
        printf("\nQueue Empty : can not display");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf(" %d ", queue[i]);
        }
    }
}

int main()
{

    enQueue(10);
    enQueue(20);
    enQueue(30);
    display();
    enQueue(40);
    enQueue(50);
    enQueue(60);
    display();
    return 0;
}