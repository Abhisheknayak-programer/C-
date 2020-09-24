#include<stdio.h>
int main(){
    int sum=0,i=1;

    while (i<=10)
    {
        sum = sum+i;
        i++;
    }
    
    printf("\n The sum of the numbers is %d\n",sum);


    return 0;
}