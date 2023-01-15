#include<stdio.h>
struct person
{
    char n[100],a[100];
    long c;
}p[3];
int main()
{
    FILE *fp;
    int i;
    fp=fopen("Perons.txt","w");
    for(i=0;i<3;i++)
    {
        printf("eneter name\n");
        scanf(" %[^\n]s",p[i].n);
        fputs(p[i].n,fp);
         printf("eneter address\n");
        scanf(" %[^\n]s",p[i].a);
        fputs(p[i].a,fp);
         printf("eneter contact\n");
        scanf("%d",&p[i].c);
        putw(p[i].c,fp);
    }
    fclose(fp);
    return 0;
}
