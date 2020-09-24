#include <stdio.h>
void swapping(int a, int b)
{
    int z;
    z = a;
    a = b;
    b = z;
    printf("\nAfter Changing the Value the No.s are %d And %d\n",a,b);
}

int main()
{
    int num1,num2;
    printf("Enter The Value Of The Two Numbers \n");
    scanf("%d%d",&num1,&num2);

    printf("\nBefore Changing the Value the No.s are %d And %d\n",num1,num2);

    swapping(num1,num2);

    return 0;
}