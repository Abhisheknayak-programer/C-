#include<stdio.h>


int main(){
    int num,count=0;
    printf("Enter The Number \t");
    scanf("%d",&num);


    printf("\n****Checking The Number****\n");
    for(int i=2;i<=num/2;i++){     
        if(num%i == 0){
            count++;
            break;
        }
    }

    if(count == 0){
        printf("The Number %d Is Prime\n",num);
    }
    else{
        printf("The Number %d Not A Prime Number Because The Number Is Divided By\n",num);
        for(int i=1;i<=num;i++){
            if(num%i == 0){
                printf("%d ",i);
            }
        }

    }



    return 0;
}