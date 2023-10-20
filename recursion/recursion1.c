//function calling  itself is called recursion
#include<stdio.h>

//10
//9
//8 7 6 5 4 3 2 1 0
void fun1(int no){ //2

    //3
    if(no==0){ 
        return;
    }
    fun1(no-1); //4
    printf("%d ",no); 
    
}

void main(){


    fun1(10); //1
    //

}