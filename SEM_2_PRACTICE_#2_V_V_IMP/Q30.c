#include<stdio.h>

typedef struct Date{
    int date;
    int month;
    int year;
}Day;

Day show(Day d1){
    printf("The Date Is %d/%d/%d\n",d1.date,d1.month,d1.year);
}

int  DateComparison(Day d1,Day d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
     if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }
    else{
        return 0;
    }
}


int main(){
    Day d1 = {21,9,2020}; 
    Day d2 = {25,11,2021}; 
    Day d3 = {9,1,2011};
    int value;

    value = DateComparison(d1,d2);
    
    printf("The Value After Comparing both The date is %d\n",value);
    return 0;
}