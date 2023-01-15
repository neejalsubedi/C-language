#include<stdio.h>
int main()
{
    int n[5]={4,2,14,7,9};
    int i,j,k;
    for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if(n[j]>n[j+1]){
                n[j]+=n[j+1];
            n[j+1]=n[j]-n[j+1];
            n[j]-=n[j+1];

        }
    }

}
for(k=0;k<5;k++){
        printf("%d\t",n[k]);
    }
return 0;
}
