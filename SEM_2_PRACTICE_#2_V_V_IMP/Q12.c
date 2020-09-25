// copying a file

#include<stdio.h>

int main(){
    char c;
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("DemoFiles/Demo.txt","r");
    ptr2 = fopen("DemoFiles/Demo2.txt","w");

    c = fgetc(ptr1);
    while(c!=EOF){
        fputc(c,ptr2);
        c = fgetc(ptr1);
    }

    printf("See your File");
    
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}