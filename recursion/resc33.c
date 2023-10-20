#include<stdio.h>

//10
int sumofnnum(int no){

//no
    if(no==0){
        return 0;
    }


    return no + sumofnnum(no-1);
    
}


void main(){

    sumofnnum(3);
}