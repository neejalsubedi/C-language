#include<stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp=fopen("student.txt","r");
    do
    {
        if(!feof(fp))
        {
            ch=fgetc(fp);
            printf("%c",ch);
        }
    }while(!feof(fp));

    fclose(fp);

    return 0;
}
