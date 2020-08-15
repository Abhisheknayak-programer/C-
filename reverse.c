#include<stdio.h>
int main (){
    int rem,rev=0,num;
    printf("Enter the No.\t");
    scanf("%d",&num);

    while(num>0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    printf("The  reverse of that entered no. is %d",rev);
    return 0;
}

