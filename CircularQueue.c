#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int cq[SIZE];

int front = -1;
int rear = -1;

void enQueue(int value)
{

    if (rear == SIZE - 1 && front == 0)
    {
        printf("\nqueue is full");
    }
    else if (rear == front - 1)
    {
        printf("\nqueue is full");
    }
    else if (rear == SIZE - 1)
    {
        rear = 0;
        cq[rear] = value;
    }
    else
    {
        // simple queue
        rear++;
        cq[rear] = value;
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
        printf("\nQueue is Empty");
    }
    else
    {
        // simple queue
        printf("\n%d removed ", cq[front]);

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == SIZE - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
}

void display()
{
    int i;

    if (front <= rear)
    {
        for (i = front; i <= rear; i++)
        {
            printf(" %d ", cq[i]);
        }
    }
    else
    {
        for (i = front; i <= SIZE - 1; i++)
        {
            printf(" %d ", cq[i]);
        }

        for (i = 0; i <= rear; i++)
        {
            printf(" %d ", cq[i]);
        }
    }
}

int main()
{

    int choice;
    int value;

    while (-1) //  0: false
    {
        printf("\n1 For Insert\n2 For Remove\n3 For Display\n4 For Exit\nEnter Choice");
        scanf("%d", &choice);

        switch (choice)
        {
        default:
            printf("\nInvalid Choice PTA");
            break;
        case 1:
            printf("Enter number");
            scanf("%d", &value);
            enQueue(value);
            break;
        case 2 * 2 - 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }

    return 0;
}