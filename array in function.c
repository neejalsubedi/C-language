#include<stdio.h>
void increment(int *pi)
{for(int k=0;k<5;k++){
    *(pi+k) += 5;
}
}
int main()
{
    int i[5]={1,2,3,4,5},j;
    //printf("%d",i);
    increment(&i);
    for(j=0;j<5;j++){
    printf("%d\t",i[j]);
}
}
