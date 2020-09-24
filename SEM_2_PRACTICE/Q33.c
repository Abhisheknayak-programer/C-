#include<stdio.h>
#include<string.h>


int main(){
    char str1[10];
    int len=0;
    printf("Enter the string:\t");
    gets(str1);
    len = strlen(str1);
    printf("\n The length of the string is %d",len);
    return 0;
}