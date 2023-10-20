#include<stdio.h>

//1
//2
void printno(int no){

    if(no==11){
        return;
    }

    printno(no+1);
    printf("%d\n",no);

}


void main(){

    printno(1);

}