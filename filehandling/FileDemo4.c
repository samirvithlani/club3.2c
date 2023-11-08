#include<stdio.h>


int main(){


//fprintf() function
//fputs() function
//fputc() function

    FILE *fp;
    int no=100;
    fp = fopen("java.txt","a");
    //w - write mode overwrite
    if(fp==NULL){
        printf("File not found");
    }
    else{

        printf("File opened successfully");
        fprintf(fp,"Hello World");
        fprintf(fp,"\n%d",no);
        fclose(fp);
    }



    return 0;
}