//#array is group of similar kind of data type
//#structure is group of diff kind of data type
#include<stdio.h>
#include<string.h>
#define SIZE 3

struct employee{

    int id;
    char name[20];
    float salary;

};

void main(){
    //refference variable
    struct employee e1[SIZE];

    for(int i=0;i<SIZE;i++){

        printf("\n enter employee id");
        scanf("%d",&e1[i].id);

        fflush(stdin);
        printf("\n enter employee name");
        gets(e1[i].name);

        printf("\n enter employee salary");
        scanf("%f",&e1[i].salary);
    }

    for(int i=0;i<SIZE;i++){

        printf("\n employee id is %d",e1[i].id);
        printf("\n employee name is %s",e1[i].name);
        //puts(e1[i].name);
        printf("\n employee salary is %f",e1[i].salary);
    }

}