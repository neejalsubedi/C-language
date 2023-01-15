#include<stdio.h>
int main()
{
    int i,j;
    //square shape *
    for(i=0; i<10; i++)
    {
        for(j=0; j<=10; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    //upside right angled triangle left side
    for(i=0; i<=10; i++)
    {
        for(j=0; j<=10-i; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    //right angled triangle left side
    for(i=0; i<=10; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }printf("\n");
    printf("\n");
    printf("\n");
    //right angled triangle right side
    for(i=0; i<=10; i++)
    {
        for(j=0; j<=9-i; j++)
        {
            printf("  ");
        }
        for(j=0; j<i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n");
    //upside down right angled triangle right side
    for(i=0; i<10; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("   ");
        }
        for(j=0; j<10-i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
   return 0;
}


