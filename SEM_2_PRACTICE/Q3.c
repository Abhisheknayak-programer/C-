#include<stdio.h>

int main(){
    int year;

    printf("enter the yaer to check wheather a year is a leap year or not :\t");
    scanf("%d",&year);

    if(year % 4 == 0){
        printf("The Year %d is a leap year",year);
    }
    else
    {
        printf("The Year %d is not a leap year",year);
    }
    


    return 0;
}