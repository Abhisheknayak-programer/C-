#include<stdio.h>
int main(){
    int num = 100-50;
    FILE *ptr;
    ptr = fopen("DemoFiles/Demo3.txt","w");
    if (ptr==NULL)
    {
        printf("File is not available\n");
    }

    fprintf(ptr,"The Num is %d",num);
    fclose(ptr);
    return 0;
}