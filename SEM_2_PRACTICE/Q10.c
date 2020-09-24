#include<stdio.h>
int main(){
    int userInput;

    printf("Enter the number :\t");
    scanf("%d",&userInput);

    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",userInput,i,userInput*i);
    }
    return 0;
}