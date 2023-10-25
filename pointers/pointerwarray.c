#include<stdio.h>

void main(){


    int a[3]={100,200,300};

    printf("Address of a: %u\n", a);

    for(int i=0;i<3;i++){
        printf("Address of a[%d]: %u\n",i, &a[i]);
    }

}