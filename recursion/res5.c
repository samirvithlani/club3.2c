#include<stdio.h>

int sumofdigit(int no){

    if(no){
        //     123%10 + sumofdigit(123/10) 
        //      12%10 + sumofdigit(12/10)
        //      1%10 + sumofdigit(1/10)
        return no%10 + sumofdigit(no/10);
    }
    else{
        return 0;
    }

}

int main(){


    int ans = sumofdigit(123);
    printf("%d",ans);


}