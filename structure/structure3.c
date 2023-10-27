#include<stdio.h>
#define SIZE 2

struct student{

    int id;
    char name[20];
    float marks[3];
    
};

void main(){


    struct student s1[SIZE];

    for(int i=0;i<SIZE;i++){

        //jeet
        //jay
        printf("\n enter student id");
        scanf("%d",&s1[i].id);

        fflush(stdin);
        printf("\n enter student name");
        gets(s1[i].name);
        // 0 th studety 0th subject...
        for(int j=0;j<3;j++){
            printf("\n enter %d subject marks",j+1);
            //jeet -> 0,1,2
            //jay -->0,1,2
            scanf("%f",&s1[i].marks[j]);
        }
        

    }

    for(int i=0;i<SIZE;i++){


        printf("\n name of student = %s",s1[i].name);
        printf("\n id  of student  = %d",s1[i].id);
        for(int j=0;j<3;j++){
            
            printf("\n marks of %s  = % f",s1[i].name,s1[i].marks[j]);
        }

        
        
    }


}