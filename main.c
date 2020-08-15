#include<stdio.h>

int main(){
    int num,rev=0,r;
    printf("Enter the No. \t");
    scanf("%d",&num);
    while(num!=0){
        r = num%10;
        rev = rev*10+r;
        num= num/10;
    }
    printf("The reverse of a no. is %d",rev);
    return 0;
}