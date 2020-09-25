#include<stdio.h>
int main(){
    int my_number,Brothers_number;
    FILE *ptr;
    ptr = fopen("DemoFiles/Demo3.txt","r");

    if (ptr==NULL)
    {
        printf("File is not available\n");
    }
    

    fscanf(ptr,"%d",&my_number);
    fscanf(ptr,"%d",&Brothers_number);

    printf("My Number is %d\n",my_number);
    printf("My Brother's Number is %d\n",Brothers_number);
    fclose(ptr);
    return 0;
}