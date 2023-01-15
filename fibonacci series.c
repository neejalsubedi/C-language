#include<stdio.h>
int main()
{
    //o,1,2,,3,5,,8,13....
    int n,n1=0,n2=1,n3;
    printf("enter range");
    scanf("%d",&n);
    while(n1<n)
    {
        printf("%d\n",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;


    }
    return 0;
}
