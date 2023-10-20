#include<stdio.h>

//10
//9
//8 7 6 5 4 3 2 1 
int sum(int no){
    if(no==0){
        return 0;
    }
    
    return no + sum(no-1);
}

void main(){


    int ans = sum(10); //1
    printf("%d",ans);

}