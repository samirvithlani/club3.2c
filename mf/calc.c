#include<stdio.h>

//global variable
int data;
extern int data2=100;

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
float mul(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}