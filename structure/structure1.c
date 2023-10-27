//#array is group of similar kind of data type
//#structure is group of diff kind of data type
#include<stdio.h>
#include<string.h>
struct employee{

    int id;
    char name[20];
    float salary;

};

void main(){
    //refference variable
    struct employee e1;
    printf("\n enter employee id");
    scanf("%d",&e1.id);

    fflush(stdin);
    printf("\n enter employee name");
    gets(e1.name);

    printf("\n enter employee salary");
    scanf("%f",&e1.salary);


    printf("\n employee id is %d",e1.id);
    printf("\n employee name is %s",e1.name);
    puts(e1.name);
    printf("\n employee salary is %f",e1.salary);

}