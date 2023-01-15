#include<stdio.h>
int main()
{
    int n[5]={5,4,3,2,1};
    int i,j,k;
    for(i=0;i<4;i++){
    for(j=i+1;j<5;j++){
    if(n[i]>n[j]){
            n[i]>n[j];
    n[i]+=n[j];
    n[j]=n[i]-n[j];
    n[i]-=n[j];

    }
}
}
for(k=0;k<5;k++){
printf("%d\t",n[k]);

}
return 0;
}
