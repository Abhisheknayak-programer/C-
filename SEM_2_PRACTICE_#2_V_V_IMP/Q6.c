#include<stdio.h>
#include<stdlib.h>

int main(){
    char arr[5],*ptr;
    ptr = &arr[0];
    printf("Enter The Array : \t");
    for(int i=0;i<5;i++){
        scanf("%d",ptr);
        ptr++;
    }

    printf("\n The address of 1st pointer is %u",ptr);
    printf("\n The address of last pointer is %u",ptr+4);


     for(int i=0;i<5;i++){
        printf("%c",arr[i]);
    }


    return 0;
}