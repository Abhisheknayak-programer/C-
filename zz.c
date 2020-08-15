#include<stdio.h>
int main(){
    int num,i,count=1;
    printf("Enter the no.\t");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i == 0){
            count++;
        }break;
    }

    if(count == 2){
        printf("%d is a prime no.\n",num);
    }
    else{
        printf("%d is not a prime no. \n",num);
    }

    return 0;
}