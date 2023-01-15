#include<stdio.h>
int main(){
int n,reverse;
printf("enter a number");
scanf("%d",&n);
reverse=rev(n);
printf("rverse is:%d",reverse);
}
int rev(a){
int r=0,e;
while(a!=0){
   e=a%10;
   r=r*10+e;
   a=a/10;
}
return r;
}
