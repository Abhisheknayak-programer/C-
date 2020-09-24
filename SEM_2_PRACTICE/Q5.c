#include<stdio.h>
int main(){
    int num1,num2,num3;
    
    printf("Enter the number 1: \t");
    scanf("%d",&num1);
    printf("\n");

    printf("Enter the number 2: \t");
    scanf("%d",&num2);
    printf("\n");

    printf("Enter the number 3: \t");
    scanf("%d",&num3);
    printf("\n");


    if(num1>num2 && num1>num3){
        printf("\n Num1 is a greater number");
    }
    else if(num2>num1 && num2>num3)
    {
        printf("\n The Num2 is a greater number");
    }
    else
    {
        printf("\n The Num3 is a greater number");
    }

    return 0;
}