#include<stdio.h>


void isPrime(int num);


void isPrime(int num){
    int Count=0;
    for(int i=2;i<num/2;i++){
        if(num%i == 0){
        Count++;
        break;
        }
    }

    if(Count==0){
        printf("The No. %d Is A Prime Number\n",num);
    }
    else
    {
        printf("The No. You Passed Is Not A Prime No. As It Is Divisible By \n");
        for(int i = 1;i<=num;i++){
            if(num%i == 0){
                printf("%d ",i);
            }
        }
    }
    
}



int main(){
    int num,count=0;

    printf("Enter The Number To Check : \t");
    scanf("%d",&num);

    isPrime(num);

    return 0;
}