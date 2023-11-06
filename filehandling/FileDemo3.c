#include<stdio.h>

int main(){


    FILE *fp;
    fp = fopen("../demo.txt", "r");
    char fname[100];
    char lname[100];
    int age;
    //fscanf -> read a line from a file and store it in a variable


    // fscanf(fp, "%s %s %d", fname, lname, &age);
    // printf("%s %s %d", fname, lname, age);

    //using while loop

    while(fscanf(fp, "%s %s %d", fname, lname, &age) != EOF){
        printf("%s %s %d\n", fname, lname, age);
    }





    return 0;
}