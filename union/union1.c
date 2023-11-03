#include<stdio.h>

union student{
    int id;//4
    char name[20];//2
    float percentage;//4 bytes
    long long int mobile;//8 bytes
};

void main(){

    union student stu;
    printf("Enter student id: ");
    scanf("%d", &stu.id);
    printf("Student id is %d\n", stu.id);
    scanf("%s", &stu.name);
    printf("Student name is %s\n", stu.name);
    scanf("%f", &stu.percentage);

}