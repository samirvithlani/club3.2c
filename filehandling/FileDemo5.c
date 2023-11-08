#include<stdio.h>

int main(){

    FILE *fp;
    int age =18;
    char name[30]="parth", lname[30]="amin";

    int age1;
    char name1[30], lname1[30];

    fp = fopen("student.txt","a+");
    fprintf(fp,"\n%s %s %d",name,lname,age);
    fclose(fp);

    printf("Data written successfully");

    //set cursor to the beginning of the file
    //fseek(fp,0,SEEK_SET);    
    while(fscanf(fp,"%s %s %d",name1,lname1,&age1)!=EOF){
        printf("\n%s %s %d",name1,lname1,age1);
    }

    fclose(fp);


    return 0;
}