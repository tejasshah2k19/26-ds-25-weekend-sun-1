#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

char stack[SIZE];
int top = -1;

void push(char data)
{

    if (top == SIZE - 1)
    {
        printf("\nSTACK OVERFLOW");
    }
    else
    {
        top++;
        stack[top] = data;
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
        printf("\n%c poped ", stack[top]);
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
            printf("\n%c", stack[i]);
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
        printf("\n%c", stack[top]);
    }
}

void peep(int location){
    int index = top - location + 1 ; 

    if(index >=0 && index <= top){ 
        printf("\n%c",stack[index]); 
    }else{
        printf("\nInvalid Location");
    }
}

int main()
{
   
    //string reverse using stack 
    
    char str[30]; 

    printf("Enter the String : ");
    scanf("%s",&str); // royal 

    //push('r')
    //push('o')
   
    display(); // layor 
   
    return 0;
}
