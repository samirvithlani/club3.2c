#include<stdio.h>

//10
//9
//8
void printno(int no){

    if(no==0){    
        return;
    }
    printno(no-1); //9
    //stack frame //empty //LIFO
    printf("%d\n",no);
    
}



void main(){



    printno(10); ///1


}

