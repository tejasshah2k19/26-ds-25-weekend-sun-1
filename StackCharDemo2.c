#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

char stack[SIZE];
int top = -1;



void push(char num)
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
            printf("%c", stack[i]);
        }
    }
}


int main(){

    char str[30]; 
    //name => royal 
    printf("\nEnter string : ");
   // scanf("%s",&str); 
    gets(str); 
    
    // push(str[0]); //r 
    // push(str[1]); //o 
    // push(str[2]); //y 
    // push(str[3]); //a 
    // push(str[4]); //l

    for(int i=0;str[i]!='\0';i++){
        push(str[i]);//royal
    }
    
    display();
    
    return 0;
}

