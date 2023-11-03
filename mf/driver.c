#include<stdio.h>
#include"sum.c"
#include"calc.c"
#include"add.h"

int main(){

    int a = 10;
    int b = 20;
    // int c = sum(a, b);
    // printf("Sum of %d and %d is %d\n", a, b, c);

    float x = 10.5;
    float y = 2.5;

    float ans = mul(x,y);
    printf("Multiplication  =%f", ans);

    printf("globale variable from calc.c file  = %d",data);
    //data2 = 200;
    printf("\n globale variable from calc.c file  = %d",data2);


    int x1 = addition(10,20,30);
    printf("Addition = %d",x1);


    return 0;




}