#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char text[225];
    fp=fopen("student.txt","w");
    fputs("this is a c program",fp);
    fclose(fp);

    fopen("student.txt","r");
    fgets(text,225,fp);
    fclose(fp);
    printf("%s",text);
    return 0;
}
