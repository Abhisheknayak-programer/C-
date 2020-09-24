#include<stdio.h>
int main(){
    int a[5],max=0;
    printf("Enter the Value :\n");
    for(int i=0;i<5;i++){
        printf("\t");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<5;i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    printf("\nThe max Out Of the Array is %d",max);

    return 0;
}