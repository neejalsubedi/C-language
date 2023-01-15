#include<stdio.h>
int power(int b,int p);
int main(){
int b,p,result;
printf("enter base and power");
scanf("%d%d",&b,&p);
result=power( b,p);
printf("result is:%d",result);

}
power(int b, int p){
int result=1;
while(p!=0){
    result*=b;
    p--;
}
return result;
}
