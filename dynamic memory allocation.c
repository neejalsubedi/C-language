#include<stdio.h>
int main()
{
    int n,i;
    int *p;
    printf("enter the number of data");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    //p=calloc(n,sizeof(int));
    printf("enter data");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("the entered data is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
    return 0;
}
