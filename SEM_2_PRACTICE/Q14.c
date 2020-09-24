#include<stdio.h>

int main(){
    int rem,num,sum=0;
    printf("Enter the num : \t");
    scanf("%d",&num);

    while (num!=0)
    {
        rem = num%10;
        sum = sum + rem; 
        num = num/10;
    }

    printf("\n The sum of the Digits of that no. is %d",sum);

    return 0;
}