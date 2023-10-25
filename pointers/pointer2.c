#include<stdio.h>

void main(){

    int a = 100;
    int *p ;
    p = &a;

    printf("Address of a: %u\n", &a);
    printf("Address of a: %u\n", p);

    p = p + 2;
    printf("Address of a: %u\n", p);

    *p = 200;

    printf("Value of a: %d\n", a);



}