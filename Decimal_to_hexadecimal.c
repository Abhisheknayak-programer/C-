#include <stdio.h>

int main()
{
    int num, rem, i = 0, arr[15];

    printf("Enter The Number To Find Its Hexadecimal : \t");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 16;
        arr[i] = rem;
        num = num / 16;
        i++;
    }

    for (i=i-1; i>=0;i--)
    {
        printf("%d ", arr[i]);
    }




    return 0;
}






        // if (arr[i] == 10)
        // {
        //     arr[i] == 'A';
        // }
        // else if (arr[i] == 11)
        // {
        //     arr[i] == 'B';
        // }
        // else if (arr[i] == 12)
        // {
        //     arr[i] == 'C';
        // }
        // else if (arr[i] == 13)
        // {
        //     arr[i] == 'D';
        // }
        // else if (arr[i] == 14)
        // {
        //     arr[i] == 'E';
        // }
        // else if (arr[i] == 15)
        // {
        //     arr[i] == 'F';
        // }