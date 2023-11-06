#include<stdio.h>

int main(){

    FILE *fp;
    //fp = fopen("C:\\Users\\Samir\\Desktop\\dictonry", "r");
    fp = fopen("../abc.txt", "r");
    if(fp==NULL){

        printf("File not found");
    }
    else{

        printf("File found\n ");
        //fgets -> read a line from a file
        // char str[1000];
        // fgets(str, 1000, fp);
        // printf("%s", str);

        ///using while loop
        char str[1000];
        while(fgets(str, 1000, fp)!=NULL){

            printf("%s", str);
        }


    }

    return 0;
}