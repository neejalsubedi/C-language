#include<stdio.h>
int main()
{
    int n[5]={1,2,3,4,5},i,s=0,mean,min,max;
    for(i=0;i<5;i++){
        s+=n[i];
    }
    mean=s/5;
    printf("mean %d\n",mean);
    min=n[0];
    max=n[0];
    for(i=1;i<5;i++){
    if(min>n[i]){
        min=n[i];
    }
    if(max<n[i]){
        max=n[i];
    }
}
printf("max=%d\n",max);
printf("min=%d",min);
return 0;
}
