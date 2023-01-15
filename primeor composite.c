#include<stdio.h>
int main()
{
    int i,rem,n,flag,no=5,count=1;
    for(n=0; count<=no; n++)
    {
        flag=0;
        for(i=2; i<=n/2; i++)
        {
            rem=n%i;
            if(rem==0)
            {
                flag=1;

                break;
            }
        }
        if(flag==0)
        {
            printf("%d\n",n);
            count++;
        }
    }
    return 0;
}

