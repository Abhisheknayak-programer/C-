#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *ptr;
    char c;
    ptr = fopen("DemoFiles/Demo.txt","r");
    if(ptr ==  NULL){
        printf("The File Doesnot Exist sir\n");
    }
    else{
    printf("The Value Is %c\n",fgetc(ptr));
    printf("The Value Is %c\n",fgetc(ptr));
    printf("The Value Is %c\n",fgetc(ptr));
    printf("The Value Is %c\n",fgetc(ptr));
    printf("The Value Is %c\n",fgetc(ptr));

    }
    fclose(ptr);
    return 0;
}