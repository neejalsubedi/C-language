#include<stdio.h>
struct Student
{
    int id;
    char na[100];
    char email[100];
    float percent;
} s;

void getStudentDetails(struct Student *ptr);
void showStudentDetail(struct Student st);
int main()
{
    char ch,e='n';
    int id,i,n=0;
    struct Student *p;
    while(e!='y')
    {
        FILE *fp;
        printf(".....Main Menu......\n");
        printf(" 'a'. Add a student\n 'b'. View Student\n 'c'. View all Students\n");
        printf(" 'd'. update a Student's detail \n 'e'. Delete a student\n");
        printf("choice: \n");
        scanf(" %c",&ch);

        switch(ch)
        {
        case'a':
                getStudentDetails(&s);
            fp=fopen("StudentsDetails.txt","a+");
            fwrite(&s,1,sizeof(s),fp);
            fclose(fp);
            break;
        case 'b':
            printf("enter id of student");
            scanf("%d",&id);
            fp=fopen("StudentsDetails.txt","r");
            while  (fread(&s,1,sizeof(s),fp))
            {
                if (s.id==id)
                {
                    showStudentDetail(s);
                }

            }
            fclose(fp);
            break;
        case 'c':
            fp=fopen("StudentsDetails.txt","r");
            while  (fread(&s,1,sizeof(s),fp))
            {
                showStudentDetail(s);
            }
            fclose(fp);
            break;
        case'd':
            printf("enter id of student to be updated\n");
            scanf("%d",&id);
            fp=fopen("StudentsDetails.txt","r+");
            while  (fread(&s,1,sizeof(s),fp))
            {
                if (s.id==id)
                {
                    showStudentDetail(s);
                }

            }
            getUpdateStudentDetails(&s);
            showStudentDetail(s);
            fseek(fp,-sizeof(struct Student),SEEK_CUR);
            fwrite(&s,1,sizeof(struct Student),fp);
            fclose(fp);
            break;
        case 'e':
            fp=fopen("StudentsDetails.txt","r");
            while  (fread(&s,1,sizeof(s),fp))
            {
                n++;
            }

            p=calloc(n,sizeof(struct Student));
            fp=fopen("StudentsDetails.txt","r");
            i=0;
            while  (fread(&s,1,sizeof(s),fp))
            {
                *(p+i)=s;
                i++;

            }
            fclose(fp);
            for(i=0; i<n; i++)
            {
                showStudentDetail(*(p+i));
            }
            printf("enetre id to be deleted");
            scanf("%d",&id);
            fp=fopen("StudentsDetails.txt","w");
            for(i=0; i<n; i++)
            {
                if((p+i)->id!=id)
                {
                    fwrite(p+i,1,sizeof(s),fp);
                }
            }

            fclose(fp);



            break;

        default:
            printf("invalid choice:");
        }

do{
        printf("Do you wan to exit(y/n)?");
        scanf(" %c",&e);
    }while(!(e=='y'||e=='n'));
    }
    return 0;
}
void getStudentDetails(struct Student *ptr)
{
    printf("eneter student's detail: \n Id: ");
    scanf("%d",&ptr->id);
    printf("name :\n");
    scanf(" %[^\n]s",&ptr->na);
    printf("Percentage: \n");
    scanf("%f",&ptr->percent);
    //showStudentDetail(*ptr);

}
void showStudentDetail(struct Student s)
{
    printf("%d. %s. %0.2f \n",s.id,s.na,s.percent);
}
void getUpdateStudentDetails(struct Student *ptr)
{
    //printf("eneter student's detail: \n Id: ");
    //scanf("%d",&ptr->id);
    printf("name :");
    scanf(" %[^\n]s",&ptr->na);
    printf("Percentage: ");
    scanf("%f",&ptr->percent);
    //showStudentDetail(*ptr);

}
