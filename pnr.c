#include<stdio.h>


int main(){
    int price,rate,years,Si;

    printf("Enter the No. of Years:\t");
    scanf("%d",&years);

    printf("\nEnter the Rate of interest:\t");
    scanf("%d",&rate);

    printf("\nEnter the  Price:\t");
    scanf("%d",&price);

    Si = (price*years*rate)/100;

    printf("\nYour Simple Intrest Value Is %d\n",Si);

    return 0;
}
