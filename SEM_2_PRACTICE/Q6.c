#include<stdio.h>
int main(){
    int Userinput;

    printf("Enter A Number Less Than 8\t");
    scanf("%d",&Userinput);

    if(Userinput <= 0){
        printf("%d is a invalid number",Userinput);
    }
    
    switch (Userinput)
    {
    case 1: printf("\n Today is Monday");
        break;
     case 2: printf("\n Today is Tuesday");
        break;
     case 3: printf("\n Today is Wednesday");
        break;
     case 4: printf("\n Today is Thursday");
        break;
     case 5: printf("\n Today is Friday");
        break;
     case 6: printf("\n Today is Saturday");
        break;
     case 7: printf("\n Today is Sunday");
        break;
    
    default: printf("Invalid Input");
        break;
    }

    return 0;
}