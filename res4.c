#include<stdio.h>

//reverse using recursion
int r,sum=0;
//123
//12
//1
int rev(int no){

    //123
    if(no){
        r = no%10; //3
        sum = sum*10 + r; //3
        rev(no/10); //12
    }
    else{
        return 0;
    }
    return sum;
}

void main(){


    int x = rev(123); //1
    printf("%d",x);

}