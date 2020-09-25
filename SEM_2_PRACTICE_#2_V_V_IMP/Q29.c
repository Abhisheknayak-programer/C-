#include<stdio.h>

typedef struct Date{
    int date;
    int month;
    int year;
}Day;

Day show(Day d1){
    printf("The Date Is %d/%d/%d\n",d1.date,d1.month,d1.year);
}

int main(){
    Day d1 = {21,9,2020}; 
    Day d2 = {25,11,2021}; 

    show(d1);
    show(d2);

    return 0;
}