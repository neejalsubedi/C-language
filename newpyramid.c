#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<9-i;j++){
            printf("   ");
        }
        for(j=0;j<=i;j++){
            printf("*  ");
        }
        for(j=0;j<i;j++){
            printf("*  ");
        }
        printf("\n");
    }
       for(i=0;i<9;i++){
        for(j=0;j<=i;j++){
            printf("   ");
        }
        for(j=0;j<=8-i;j++){
            printf("*  ");
        }
        for(j=0;j<8-i;j++){
            printf("*  ");
        }
        printf("\n");
    }
return 0;

}
