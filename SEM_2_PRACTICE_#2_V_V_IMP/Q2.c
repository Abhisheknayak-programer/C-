#include<stdio.h>
#include<stdlib.h>


int main(){
    char num,*ptr;
    printf("Enter the no. : \t");
    scanf("%c",&num);
    ptr = &num;
    printf("\nThe Value of ptr as well as the address of the num is %d\n",ptr);
    ptr++;
    printf("Now The Value of ptr %d\n",ptr);
    ptr +=5;
    printf("Now The Value of ptr %d\n",ptr);

    return 0;
}