#include<stdio.h>
int main(){
    int count=0,count2=7;
    for(int i=10;i>1;i--){
        for(int k=1;k<=count;k++){
            printf(" ");
        }

        for(int j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
        count++;
    }


     for(int i=3;i<10;i++){
        for(int k=1;k<=count2;k++){
            printf(" ");
        }

        for(int j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
        count2--;
    }

    return 0;
}