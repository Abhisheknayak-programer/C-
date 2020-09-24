#include<stdio.h>
int main(){
    int num1,num2,num3,sum=0;
    float avg;

    printf("Enter the number 1: \t");
    scanf("%d",&num1);
    printf("\n");

    printf("Enter the number 2: \t");
    scanf("%d",&num2);
    printf("\n");

    printf("Enter the number 3: \t");
    scanf("%d",&num3);
    printf("\n");

    sum=num1+num2+num3;

    printf("sum Of the Numbers are %d\n",sum);

    avg = sum/3;

    printf("The Average of the three numbers are %f\n",avg);

    return 0;
}