#include<stdio.h>


void swap(int a,int b){


    printf("\n inside swap value of a = %d",a);
    printf("\n inside swap add of a = %u",&a);

    printf("\n inside swap value of b = %d",b);
    printf("\n inside swap add of b = %u",&b);


    int temp = a;
    a = b;
    b = temp;


    printf("\n after swap.. inside swap value of a = %d",a);
    printf("\n after swap..  inside swap add of a = %u",&a);

    printf("\n after swap.. inside swap value of b = %d",b);
    printf("\n after swap.. inside swap add of b = %u",&b);







}



void main(){

    int a=100,b=200;

    printf("\n inside main value of a = %d",a);
    printf("\n inside main add of a = %u",&a);

    printf("\n inside main value of b = %d",b);
    printf("\n inside main add of b = %u",&b);


    swap(a,b);

     printf("\n after swap.. inside main value of a = %d",a);
    printf("\n after swap..  inside main add of a = %u",&a);

    printf("\n after swap.. inside main value of b = %d",b);
    printf("\n after swap.. inside main add of b = %u",&b);





}