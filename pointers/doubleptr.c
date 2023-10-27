#include<stdio.h>

void main(){

        int val=100;
        int *ptr1,**ptr2;

        ptr1 = &val; // ptr1 holds address of val
        printf("\n value of val = %d",val);
        printf("\n ptr1 value = %d",*ptr1);
        
        ptr2 = &ptr1; // ptr2 holds address of ptr1

        printf("\n ptr2 value = %d",**ptr2);

        //*ptr1 = 300;
        **ptr2 = 400;
        printf("\n value of val = %d",val);
        printf("\n ptr1 value = %d",*ptr1);
        printf("\n ptr2 value = %d",**ptr2);

}