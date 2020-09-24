#include<stdio.h>

int main(){
    int num1=0,num2=1,num3,range;

    printf("Enter the total number of the Series you want to see : \t");
    scanf("%d",&range);
    
    for(int i=1;i<=range;i++){
        printf("%d\t",num1);
        num3 = num1+num2;
        num1 = num2;
        num2 = num3;
    }

    return 0;
}