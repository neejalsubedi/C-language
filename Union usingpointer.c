#include<stdio.h>
struct student
{
    char n[100];
    int id;
    float percent;
}*s;
int main()
{
    int i,nu;
    printf("enter number of student\n");
    scanf("%d",&nu);
    s=calloc(nu,sizeof(struct student));
    for(i=0;i<nu;i++)
    {
        input(s+i);
    }
     for(i=0;i<nu;i++)
    {
        display(s+i);
    }

  return 0;
}
void input(struct student *s)
{

        printf("enter name\n");
        scanf(" %[^\n]s",&s->n);
        printf("enter id\n");
        scanf("%d",&s->id);
        printf("enter percent\n");
        scanf("%f",&s->percent);



}
void display (struct student *s)
{

        printf("name is : %s\n",s->n);
        printf("id is: %d\n",s->id);
        printf(" percent is: %f\n",s->percent);


    }

