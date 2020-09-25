#include<stdio.h>
int main(){
    FILE *ptr;
    int num,doubledValue;
    ptr = fopen("DemoFiles/Demo4.txt","r");

    fscanf(ptr,"%d",&num);

    doubledValue = num*2;

    printf("The Double of the no. present inside the file is %d",doubledValue);

    fclose(ptr);
    return 0;
}