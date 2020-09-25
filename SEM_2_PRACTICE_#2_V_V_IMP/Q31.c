#include<stdio.h>

typedef struct Time{
    int hour;
    int minute;
    int second;
}Time;

int cmpvalueFunc(Time t1,Time t2){
    if(t1.hour>t2.hour){
        return 1;
    }
    else if(t1.hour<t2.hour){
        return -1;
    }
    else if(t1.minute>t2.minute){
        return 1;
    }
    else if(t1.minute<t2.minute){
        return -1;
    }
     else if(t1.second>t2.second){
        return 1;
    }
    else if(t1.second<t2.second){
        return -1;
    }
    else{
        return 0;
    }
}

int main(){
    Time t1 = {12,49,20};
    Time t2 = {12,50,30};
    int cmpValue;

    cmpValue = cmpvalueFunc(t1,t2);

    printf("\n After the comparison The value becomes %d This Means \n",cmpValue);

    if(cmpValue == 1){
        printf("\n Time 1 is greater than Time 2\n");
    }
    else if(cmpValue == -1){
        printf("\n Time 2 is greater than Time 1\n");
    }
    else{
        printf("\n Time is equal to Time 2\n");
    }


    return 0;
}