#include<stdio.h>
#include<stdlib.h>

void arr(int size){

    int *ptr;
    ptr = (int *)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &ptr[i]);
    }
    for(int i = 0; i < size; i++){
        printf("Element %d is %d\n", i, ptr[i]);
    }


}

void main(){


    int size;
    printf("\n enter size");
    scanf("%d", &size);

    arr(size);


}