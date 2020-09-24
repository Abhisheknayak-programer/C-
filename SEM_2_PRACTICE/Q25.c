#include<stdio.h>
int main(){
    int count=0;
    for(int i=10;i>1;i--){

        for(int k=1;k<=count;k++)   
        {
            printf(" ");
        }

        for(int j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
        count++;
    }
    return 0;
}