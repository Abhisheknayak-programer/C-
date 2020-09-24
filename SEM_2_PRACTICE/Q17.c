#include<stdio.h>
int main(){
    int count=0,range;
    
    printf("Enter the range upto which you want to see the prime series :\t");
    scanf("%d",&range);

    for(int i=1;i<range;i++){
        count = 0;
       for(int j=2;j<range;j++){
           if(i%j == 0){
               count++;
           }
       }
           if(count <= 1 && count < 2){
               printf("%d\t",i);
           }
    }

    return 0;
}