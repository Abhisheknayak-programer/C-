//Multiplication Table using file ...


#include<stdio.h>

int main(){
    int num;
    FILE *ptr;
    ptr = fopen("table.txt","w");
    
    printf("Enter The Number For Which You Want To See The Table For:\t");
    scanf("%d",&num);
    
    fprintf(ptr,"\n**********Printing the Multiplication table of 7**********\n");
    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d X %d = %d\n",num,i,i*num);
    }

    printf("See your File Work is Done");

    fclose(ptr);
    return 0;
} 
