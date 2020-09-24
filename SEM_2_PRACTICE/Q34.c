#include<stdio.h>
#include<string.h>


int main(){
    char str1[10],str2[10];
    printf("Enter the string 1:\t");
    gets(str1);
    printf("Enter the string 1:\t");
    gets(str2);

    strlwr(str1);
    strupr(str2);

    puts(str1);
    puts(str2);
    return 0;
}