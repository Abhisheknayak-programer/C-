#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("DemoFiles/Demo.txt","r");
    char c = fgetc(ptr);
    while(c!=EOF){
        printf("%c",c);      // Printing The value of the Variable
        c = fgetc(ptr);     // Again again changing that value
    }

    fclose(ptr);
    return 0;
}