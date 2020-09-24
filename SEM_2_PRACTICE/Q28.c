#include<stdio.h>
int main(){
    int a[5];
    printf("Enter the Value :\n");
    for(int i=0;i<5;i++){
        printf("\t");
        scanf("%d",&a[i]);
    }

    printf("\n Our Values are :\n");
    for(int i=0;i<5;i++){
        printf("\t");
        printf("%d\n",a[i]);
    }
    return 0;
}