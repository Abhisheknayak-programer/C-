#include<stdio.h>

int main(){
    int sum=0;

    for(int i=1;i<4;i++){
        for(int j=1;j<3;j++){
            printf("\n i=%d,j=%d,sum=%d",i,j,i+j);
        }
    }


    return 0;
}