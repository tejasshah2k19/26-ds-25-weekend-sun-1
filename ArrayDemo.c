#include <stdio.h>
#define SIZE 5

int arr[SIZE];
int i;

void insert(int location, int data)
{
    for (int i = SIZE - 1; i > location - 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[location - 1] = data;
}

void display()
{
    printf("\nArray Items : ");
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

void removeItem(int location)
{
    // 5
    for (int i = location - 1; i < SIZE - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{

   

    insert(1,10);
    display();
    

    return 0;
}

// function -> inputData() -> array scan
// function -> display()   -> array print
// main -> call
