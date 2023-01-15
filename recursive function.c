#include<stdio.h>
int fib(int);
int main()
{
    int n,f;
    printf("enter nTH number");
    scanf("%d",&n);
    f=fib(n-1);
    printf("%d",f);
    return 0;
}
int fib(int n)
{
    if(n<2)
    {
        return n;

    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
