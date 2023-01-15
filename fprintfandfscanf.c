#include<stdio.h>
int main()
{
    FILE *fp;
    char name[]="ns100";
    /*
    fp=fopen("student.txt","w");
    fprintf(fp,"hello %s",name);
    fclose(fp);
    */

    fp=fopen("student.txt","r");
    fprintf(fp," %[^\n]s",name);
    fclose(fp);
    printf("%s",name);
    return 0;

}
