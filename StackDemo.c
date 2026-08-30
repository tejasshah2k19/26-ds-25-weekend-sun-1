#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int num)
{

    if (top == SIZE - 1)
    {
        printf("\nSTACK OVERFLOW");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nSTACK EMPTY");
    }
    else
    {
        printf("\n%d poped ", stack[top]);
        top--;
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("\nSTACK EMPTY");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
}

void peek()
{
    if (top == -1)
    {
        printf("\nStack EMpty");
    }
    else
    {
        printf("\n%d", stack[top]);
    }
}

void peep(int location){
    int index = top - location + 1 ; 

    if(index >=0 && index <= top){ 
        printf("\n%d",stack[index]); 
    }else{
        printf("\nInvalid Location");
    }
}

int main()
{

    int choice;
    int num;

    // true -> 1 -1 2 22 -22
    // false -> 0

    while (-1) // while(true)
    {
        printf("\n1 For PUSH\n2 For POP\n3 For Display\n4 for PEEK\n0 For EXIT");
        printf("\nEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter num : ");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 0:
            exit(0);
        default:
            break;
        }
    }
    return 0;
}
