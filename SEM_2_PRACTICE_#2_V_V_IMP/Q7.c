#include<stdio.h>
#include<stdlib.h>

void Swapping(int *num,int *nextnum){
    int temp;
    temp = *num;
    *num = *nextnum;
    *nextnum = temp;

    printf("The No.s After Changing Are %d And %d\n",*num,*nextnum);
}

int main(){
    int num1,num2;
    printf("Enter the value of 2 No.s :\t");
    scanf("%d%d",&num1,&num2);
    Swapping(&num1,&num2);
    return 0;
}