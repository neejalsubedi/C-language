#include<stdio.h>
int main(){
char str1[50],str2[50],res[100];
int i,j;

printf("enter string");
scanf(" %s",str1);

printf("enter string");
scanf(" %s",str2);

//copy first string to result string

i=0;
while(str1[i]!='\0'){
    res[i]=str1[i];
    i++;
}
res[i]=' ';
i++;

j=0;
// append second string to result string
while(str2[j]!='\0'){
    res[i]=str2[j];
    i++;
    j++;
}
res[i]='\0';
printf("%s",res);
return 0;
}
