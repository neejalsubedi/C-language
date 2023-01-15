#include<stdio.h>
int main()
{
    int n[5],i,s=0;
    //calculate sum of elements in array and average

    for (i=0;i<5;i++){
        printf("enter number");
        scanf("%d",&n[i]);
    }

    for(i=0;i<5;i++){
        s=s+n[i];
    }

    printf("%d",s);
    return 0;
}



