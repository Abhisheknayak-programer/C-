#include<stdio.h>

int main(){
    int num1;
    printf("Enter the Num : \t");
    scanf("%d",&num1);

    if(num1>0){
        printf("\n The no. is a positive number");
    }
    else if(num1<0){
        printf("\n The no. is a negitive number");
    }
    else
    {
        printf("\n The No. you entered is 0");
    }
    
    
    return 0;
}