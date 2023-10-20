#include<stdio.h>

//4
int fact(int no){

    if(no==0){
        return 1;
    }
    // 4 * fact(3)
    // 3 * fact(2)
    // 2 * fact(1)
    // 1 * fact(0)
    return no * fact(no-1);
    //1 *2 *3 *4 = 24

}


void main(){


    int ans = fact(4); //1
    printf("%d",ans);

}