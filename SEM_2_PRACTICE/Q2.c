#include<stdio.h>

int main(){
    int num;
    printf("This is the program to check whether a no. is a odd number or a even number : \n");
    printf("Enter the num:\t");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("\nThe no. is a even number");
    }
    else
    {
        printf("\nThe no. is a odd number");
    }
    
    return 0;
}