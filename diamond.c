#include<stdio.h>
int main()
{
    int i,j;
    //upside right angled triangle left side
    for(i=0; i<=10; i++)
    {
        for(j=0; j<=10-i; j++)
        {
            printf("*  ");

        }
        printf("\n");

    }

    //left side right angled triangle
    for(i=0; i<=10; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("*  ");
        }
        printf("\n");
        }
    //diamond: one triangle at first line and upside down triangle at next line.
        //right angled triangle right side
        for(i=0; i<=10; i++)
      {
        for(j=0; j<=9-i; j++)
        {
            printf("  ");
        }
        for(j=0; j<i; j++)
        {
            printf("   *");
        }
        printf("\n");
    }
    //upside down right angled triangle
    for(i=0; i<10; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("  ");
        }
        for(j=0; j<10-i; j++)
        {
            printf("   *");
        }
        printf("\n");
    }

    return 0;
}
