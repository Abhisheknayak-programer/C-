#include<stdio.h>


int fibonassi(int range){
    if(range == 1 || range == 2){
        return 1;
    }
    else
    {
        return (fibonassi(range-1)+fibonassi(range-2));
    }
    
}

int main(){
    int range,value;
    printf("Enter The range : \t");
    scanf("%d",&range);

    for(int i=1;i<=range;i++){
        value = fibonassi(i);
        printf("%d ",value);
    }
    return 0;
}