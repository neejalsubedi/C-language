#include<stdio.h>
int main(){
char sentence[100], word[10][20];
int i,k=0,j=0;
printf("enter sentence\n");
scanf("%[^\n]s",sentence);
for(i=0;sentence[i]!='\0';i++){
    if(sentence[i]!=' '){
        word[j][k]=sentence[i];
        k++;
    }
    else{
        word[j][k]='\0';
        j++;
        k=0;

    }
}
word[j][k]='\0';
for(i=0;i<=j;i++){
    printf("%s\n",word[i]);
}
return 0;
}

