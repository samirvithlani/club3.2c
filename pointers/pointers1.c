#include<stdio.h>

void main(){


    int a =10;
    int *p;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);

    printf("Value of p: %p", p);
    printf("\n Address of p: %p", &p);

    p = &a;

    printf("\n Value of a: %d", a);
    printf("\n Address of a: %p", &a);

    printf("\n Value of p: %d", *p);
    printf("\n Address of p: %p", p);

    //after manupulation

    *p =20;

    printf("\n value of p = %d",*p);
    printf("\n address of p = %p",p);


    printf("\n value of a = %d",a);







}