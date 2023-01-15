#include<stdio.h>
int main(){
int a[2][4]={{1,2,3,4},{4,5,6,7}};
int b[2][4]={{7,8,9,0},{1,2,3,4}},c[2][4];
int i,j;
 for(i=0;i<2;i++){
    for(j=0;j<4;j++){
            c[i][j]=a[i][j]+b[i][j];
        printf("%d\t ",c[i][j]);
    }
    printf("\n");

 }
return 0;
}
