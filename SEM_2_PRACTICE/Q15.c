#include <stdio.h>
int main()
{
    int rem, num, rev=0;
    printf("Enter the num : \t");
    scanf("%d", &num);

    do{
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }while(num!=0);

    printf("\n The reverse of that number is %d",rev);

    return 0;
}