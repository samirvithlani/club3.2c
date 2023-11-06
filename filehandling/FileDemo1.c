#include<stdio.h>

int main(){


    FILE *fp;
    int count =0;
    char ch;
    //D:\royal\club3.2c\abc.txt
    //./ means current directory
    // ../ means parent directory
    // ../../ means grand parent directory
    fp = fopen("../abc.txt","r");

    if(fp==NULL){
        printf("File not found");
        return 0;
    }
    //fscanf -> read from file and store in variable
    //fgetc --> read from file and return a character
    //fgets --> read from file and return a string
    else{
        printf("File found\n ");
        //using fgetc
        // char ch;
        // ch = fgetc(fp);
        // printf("\n %c",ch);

        //using while loop

        while(!feof(fp)){
            
            ch = fgetc(fp);
            printf("%c",ch);
            count++;
        }
    }

    fclose(fp);
    printf("\n Total characters = %d",count);

    return 0;
}