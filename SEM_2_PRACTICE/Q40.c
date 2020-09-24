#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 5,*ptr,**ptr2;

    ptr = &a;
    ptr2 = &ptr;

    printf("The Value of a is %d\n",a);
    printf("The Value of a is %d\n",*ptr);
    printf("The Value of a is %d\n",**ptr2);

    printf("\n The Address of a is %u",&a);
    printf("\n The Address of a is %u",ptr);
    printf("\n The Address of a is %u",*ptr2);

    printf("\n The address of ptr is %u",ptr2);

    return 0;
}