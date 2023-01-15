#include<stdio.h>
int armstrong(int);
int digit(int);
int power(int,int);
int main(){
int n,arm;
printf("enter a number");
scanf("%d",&n);
arm=armstrong(n);
if(n==arm){
    printf("is armstrong");
}
    else{
     printf("is not armstrong");
    }


return 0;
}

int armstrong(int n)
{
    int dig, rem,res=0;
    dig=digit(n);
    while(n!=0){
        rem=n%10;
        res=res+power(rem, dig);
        n=n/10;
    }
    return res;

}
    int digit(int n)
    {
        int  i=0;
        while(n!=0){
            i++;
            n/=10;
        }
        return i;
    }
    int power(int b, int p)
    {
        int rs=1;
        while(p!=0){
            rs*=b;
            p--;
        }
        return rs;
    }
