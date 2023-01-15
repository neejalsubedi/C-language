#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%n==0){
            printf("prime");
        }

    }



    return 0;
}


