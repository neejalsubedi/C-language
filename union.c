#include<stdio.h>
struct student{
    char n[50];
    int id;
    float percent;

}s[3];
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
          printf("enter name of student: \n");
        scanf(" %[^\n]s",s[i].n);
        printf("enter id: ");
        scanf("%d",&s[i].id);
         printf("enter precent of student: \n");
        scanf("%f",&s[i].percent);
    }
    for(i=0;i<3;i++)
    {
          printf(" name of student: %s\n",s[i].n);
        printf("enter id: %d\n",s[i].id);
         printf("precent of student: %f\n",s[i].percent);
    }

return 0;
}
