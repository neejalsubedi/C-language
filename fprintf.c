#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char str[200],text[200];
    strcpy(str,"text to be written.");
    fp=fopen("STUDENT.txt","w");
    fwrite(str,200,sizeof(char),fp);
    fclose(fp);

    fp=fopen("STUDENT.txt","r");
    fread(text,1,sizeof(text),fp);
    fclose(fp);
    printf("%s",text);
    return 0;
}
