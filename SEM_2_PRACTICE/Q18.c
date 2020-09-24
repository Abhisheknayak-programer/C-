#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Num : \t");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (i > 20)
        {
            break;
        }
        printf("%d\t", i);
    }

    printf("\n\n\n\n\n\n\n");

    for (int j = 1; j <= num; j++)
    {
        if (j < 80)
        {
            continue;
        }
        printf("%d\t", j);
    }

    return 0;
}
