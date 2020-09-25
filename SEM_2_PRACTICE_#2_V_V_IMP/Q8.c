#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    int *ptr1,*ptr2;

    printf("Enter The Value of that no. to check the comparison of the pointers address\n");
    scanf("%d",&num);

    ptr1 = &num;
    ptr2 = &num;

    if(ptr1 == ptr2){
        printf("Yes The Address Of The Two pointers Matched\n");
    }
    else
    {
        printf("No The Address Of The Two pointers Did Not  Matched\n");
    }
    
    return 0;
}