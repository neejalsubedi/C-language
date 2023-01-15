#include<stdio.h>
void increment(int *pi,int *pj){
*pi+=5;
*pi+=5;
printf("i=%d\n",*pi);
printf("j=%d\n",*pj);
}
int main()
{
    int i[5]={2,3,4,5,6},j[5]={5,6,7,8,9};
    printf("i=%d\n",i);
    printf("j=%d\n",j);
    increment(&i,&j);
    printf("i=%d\n",i);
    printf("j=%d\n",i);
}


