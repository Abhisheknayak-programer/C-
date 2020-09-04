#include <stdio.h>

int main()
{
    int num, rem, i = 0;
    int a[10]; // it holds 10 values

    printf("Enter the Number : \t");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 2;
        a[i] = rem; // it stores the remender of the num after dividing it with 2
        num = num / 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

