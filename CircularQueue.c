#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int cq[SIZE];

int front = -1;
int rear = -1;

void enQueue(int value)
{
}

void deQueue()
{
}

void display()
{
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
        case 2*2-2:
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