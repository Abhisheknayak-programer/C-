#include<stdio.h>

int main(){
    int fact=1,num;

    printf("Enter the number to find the factorial of that number : \t");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        fact = fact * i;
    }

    printf("The fact of the number %d is %d",num,fact);

    return 0;
}