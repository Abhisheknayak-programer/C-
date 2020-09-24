#include <stdio.h>
int main()
{
    int num, count=0;

    printf("Enter the number :\t");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }

    if(count > 0){
        printf("\n The no. is not a prime number");
    }
    else
    {
        printf("\n The no. is a prime number");
    }
    
    return 0;
}