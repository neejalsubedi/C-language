#include<stdio.h>
char prime(a);
int main(){
    char flag;
 int i,a,p;
 printf("enter number");
 scanf("%d",&a);
 flag=prime(a);
 if(flag=='p'){
    printf("prime");
 }
else{
  printf("composite");
}
return 0;
}

char prime(int a){
    char p;
    int i;
    for(i=2;i<a/2;i++){
    if(a%i==0){
        return 'c';
    }

    }
    return 'p';
    }



