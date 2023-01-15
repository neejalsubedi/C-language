#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    int a[10][10],b[10][10],p[10][10];
    int i,j,k;

    printf(" enter order of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter order of  second matrices\n");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2)
    {
        printf("cannot multiply");

    }
    else
    {

        printf("can be multiplied\n");
        printf("\n");

        printf("enter elements of first matrices\n");
        for( i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("a[%d][%d]  ",i,j);
                scanf("%d",&a[i][j]);
            }
        }

        printf("enter elements of second matrices\n");

        for(i=0; i<r2; i++){
            for(j=0; j<c2; j++){
                printf("b[%d][%d] : ", i, j);
                scanf("%d", &b[i][j]);
            }
        }
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
            p[i][j]=0;
        for(k=0;k<c1;k++){
            p[i][j]+=a[i][k]*b[k][j];
        }
    printf("%d\t",p[i][j]);
    }
    printf("\n");
}
    }
    return 0;
}
