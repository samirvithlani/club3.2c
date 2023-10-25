#include<stdio.h>

void stringCopy(char *x,char s[10]){
   
    printf("value of s =%s\n",s);
    x = s;
    printf("value of x =%s\n",x);
}
void main(){

    char name[10]="amit";
    char *fname;
    stringCopy(fname,name);

    printf("value of fname =%s", fname);


}