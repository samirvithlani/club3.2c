//2 type of memnory allocations

//static memnory allocations
    // int a[10]; --> 40 bytes
    // static memnory allocations alloted at compile time
//dynamic memnory allocations
    // malloc() --> memory allocation
    // calloc() --> clear memory allocation contigous memory allocation
    // realloc() --> reallocation of memory
    // free()  --> free the memory
    
    //dynamic memnory allocations alloted at run time

#include<stdio.h>
#include<stdlib.h>    


int main(){


    int *ptr;
    int n,i;

    printf("Enter the size of the array you want to create\n");
    scanf("%d",&n); //10

    //print int size using sizeof operator

    printf("The size of int on my pc is %d\n",sizeof(int));

    //dynamic memory allocation
    //(int *) --> typecasting
    //ptr = (int *)calloc(n, sizeof(int));
    ptr = (int *)malloc(n * sizeof(int));
    
    if(ptr == NULL){
        printf("Memory not allocated\n");
        exit(0);
    }
    else{

        //free the memory
        free(ptr);
        printf("memory freed successfully\n");

        //print memory size of ptr
        printf("The size of ptr is %d\n",sizeof(ptr));
    }
    



    return 0;

}
