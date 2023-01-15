#include<stdio.h>
int main()
{

    char name[50];
    printf("what is name");
    scanf("%[^\n]s",&name);
    printf("hello %s",name);
    return 0;
}
