#include<stdio.h>

long int factorial(int num){
    if(num<=1){
        return (1);
    }
    else
    {
        return (num*factorial(num-1));
    }
    
}

int main(){
    long int k;
    int i,number;

    printf("Enter The no : \n");
    scanf("%d",&number);

    for(i=1;i<=number;i++){
        k = factorial(i);
        printf("\nThe Factorial of %d is %d",i,k);
    }


    return 0;
}