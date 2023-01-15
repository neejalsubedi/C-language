#include<stdio.h>
int main()
{
    char n[50],ch;
    int len=0,j,i;
    printf("give name");
    scanf("%[^\n]s",n);
    while(n(len)!='\0')
        {
        len++;
    }
for(j=len-1,i=0;i<=len/2;i++,j--){
    ch=n[i];
    n[i]=n[j];
    n[j]=ch;
}

printf("length:%d\n",len);
printf("recesed:%s\n",n);
return 0;
}
