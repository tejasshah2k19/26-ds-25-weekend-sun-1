#include<stdio.h>
#include<stdlib.h>


struct student{
    char name[30];
    int maths,sci,eng; 
};

int main(){

    int *a;
    int *b; 
    // int arr[5]; //5 block 4 byte => 20 byte 
    int *arr;
    int ans; 
    struct student *s;

    
    a = (int*) malloc(sizeof(int));
    b = (int*) malloc(sizeof(int));

    arr = calloc(10,sizeof(int));

    s = (struct node*) malloc(sizeof(struct student));// [30|4|4|4]42
    //s. 
    //s-> 
    //struct pointer dma -> scan and print 
    printf("\nEnter two value");
    scanf("%d%d",a,b); 

    ans = *a + *b ; 

    printf("\nAdd = %d",ans);



    return 0; 
}