#include<stdio.h>
#include<conio.h>

int main(){
    int arr[]={1,2,3,45,6,2,4,12,3,3456};
    int *ptr;
    ptr = &arr[0];

    for(int i=0;i<10;i++){
    printf("The Address Of the %dTh Element Of the array is %d\n",i+1,ptr);
    ptr++;
    }

    return 0;
}