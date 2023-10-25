#include<stdio.h>

//123
//12
//1
//0
int sumofdigt(int no){

    //123<0
    if(no==0){
        return 0;
    }


    // 123%10 + sumofdigt(123/10)
    // 3 + sumofdigt(12)
    // 3 + 2 + sumofdigt(1)
    // 3 + 2 + 1 + sumofdigt(0)
    return no%10 + sumofdigt(no/10);


}


void main(){



    int ans = sumofdigt(123);
    printf("%d",ans);

}