#include<stdio.h>
#include<string.h>


int main(){
    char str1[10],str2[10];
    printf("Enter the string 1:\t");
    gets(str1);
    printf("Enter the string 2:\t");
    gets(str2);
    
    strcat(str1,str2);

    printf("\nAfter The string Concadination The String Become %s",str1);


    return 0;
}