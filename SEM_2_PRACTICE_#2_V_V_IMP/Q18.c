#include <stdio.h>
#include<string.h>

int main()
{
    char name1[10], name2[10];
    int sal1, sal2;
    FILE *ptr;
    ptr = fopen("DemoFiles/Emp.txt", "w");

    printf("\nEnter your name 1 : \t");
    scanf("%s", name1);
    fflush(stdin);
    printf("\nEnter your salary: \t");
    scanf("%d", &sal1);
    fflush(stdin);

    printf("\nEnter your name 2 : \t");
    scanf("%s", name2);
    fflush(stdin);
    printf("\nEnter your salary 2 : \t");
    scanf("%d", &sal2);
    fflush(stdin);

    fprintf(ptr,"%s,%d\n",name1,sal1);
    fprintf(ptr,"%s,%d\n",name2,sal2);

    fclose(ptr);
    return 0;
}