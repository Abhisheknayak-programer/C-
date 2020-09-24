#include<stdio.h>
int main(){
    int sum=0,rem,num,temp;

    printf("Enter the number : \t");
    scanf("%d",&num);   
    temp = num;

    while (num!=0)
    {
        rem = num%10;
        sum += rem*rem*rem;
        num = num/10;
    }
    
    if(sum == temp){
        printf("\nThe number is a Armstrong Num");
    }
    else
    {
        printf("\nThe number is not a armstrong num");
    }
    

 return 0;   
}
