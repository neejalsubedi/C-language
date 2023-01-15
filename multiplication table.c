#include<stdio.h>
int main()
{
int i,n;
for(n=2;n<=10;n++){
printf ("multiplication table of %d\n",n);

for(i=1;i<=10;i++)
    {


       printf("%d*%d=%d\n",n,i,n*i);
}
}
return 0;
}
