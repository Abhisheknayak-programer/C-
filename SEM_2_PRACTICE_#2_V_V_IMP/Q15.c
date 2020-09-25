//Multiplication Table using file ...
// Assume That we are finding the mul table of the number = 7...


#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("table.txt","w");

    fprintf(ptr,"\n**********Printing the Multiplication table of 7**********\n");
    for(int i=1;i<=10;i++){
        fprintf(ptr,"7 X %d = %d\n",i,i*7);
    }

    printf("See your File Work is Done");

    fclose(ptr);
    return 0;
} 
