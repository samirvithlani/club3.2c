#include<stdio.h>
#include<string.h>


void main(){

        stringCopy("amit");
        // char a[10]="amit";
        // char b[10]="";

        // strcpy(b,a);
        // printf("value of b =%s\n",b);




        char name[5] ="java";
        char name1[5]="";
        char *fname;

        fname = name;
        //name =name1;

        printf("Address of name: %u\n", name);
        printf("Address of name[0]: %u\n", &name[0]);
        printf("value of fname =%s", fname);


}