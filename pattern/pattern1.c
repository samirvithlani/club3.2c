/*
  * 
 * *
* * *  

*/

#include<stdio.h>

void main(){

//i =1
//i =2
//i =3
      for(int i=1;i<=3;i++){
//k=2
        //space for loop
        for(int k=2;k>=i;k--){
            printf(" ");
        }

//j=1, j<=i,
//j=1 i =2
//1
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
      }



}