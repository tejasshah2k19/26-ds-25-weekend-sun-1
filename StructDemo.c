#include <stdio.h>

struct student
{
    char name[20];
    float percentage;
    int maths, sci, eng;
};
struct student s[5]; // 20+4+4+12 =>  40++

struct student *p; 
struct student t; 

void getData()
{

    int i;

    for (i = 0; i < 3; i++)
    {
        printf("enter name and marks of three subjects");
        scanf("%s%d%d%d", &s[i].name, &s[i].maths, &s[i].sci, &s[i].eng);
        s[i].percentage = (s[i].maths + s[i].sci + s[i].eng) / 3.0;
    }
}

void printData()
{
    int i;
    printf("\nName\tMaths\tSci\tEng\tPercentage");
    for (i = 0; i < 3; i++)
    {
        printf("\n%-10s %3d\t%3d\t%3d\t%3f", s[i].name, s[i].maths, s[i].sci, s[i].eng, s[i].percentage);
    }
}

int main()
{
    getData();
    printData();

    printf("Enter name and marks of three subjects");
    scanf("%s%d%d%d",p->name,&p->maths,&p->sci,&p->eng); 


    return 0;
}