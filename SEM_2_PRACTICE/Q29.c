#include<stdio.h>
int main(){
    int a[5],sum=0;
    printf("Enter the Value :\n");
    for(int i=0;i<5;i++){
        printf("\t");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<5;i++){
        sum += a[i];
    }
    printf("\n Sum is %d",sum);
    return 0;
}
    
