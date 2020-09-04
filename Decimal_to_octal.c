#include<stdio.h>


int main(){
    int num,rem,i=0;
    int arr[15];
    printf("Enter The Number You Want To Check Its Octal Number:\t");
    scanf("%d",&num);


    while(num > 0){
        rem = num%8;
        arr[i] = rem;
        num = num/8;
        i++;
    }


    for(i=i-1;i>=0;i--){
        printf("%d",arr[i]);
    }

    return 0;
}