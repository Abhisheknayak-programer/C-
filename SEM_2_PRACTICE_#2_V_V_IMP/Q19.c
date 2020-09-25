#include<stdio.h>
int main(){
    FILE *ptr;
    int num=67;
    ptr = fopen("DemoFiles/Demo4.txt","w");

    fprintf(ptr,"%d",num);

    fclose(ptr);
    return 0;
}