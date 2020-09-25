#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5],*ptr;

    ptr = arr;

    printf("The address of array starts from and the pointer points toward the %d and %d\n",&arr[0],ptr);

    printf("Enter the values : \t");
    printf("\n");
    for(int i=0;i<5;i++){
        scanf("%d",ptr);
        ptr++;
    }

    printf("\n The Values and the Address of the  variables are :\n");
     for(int i=0;i<5;i++){
        printf("The value of %dth element is %d\n",i+1,arr[i]);
        printf("The address of %dth element is %u\n",i+1,ptr);
        ptr++;
    }


    return 0;
}