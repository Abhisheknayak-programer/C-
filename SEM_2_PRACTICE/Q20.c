#include<stdio.h>
#include<math.h>

int main(){
    int sum=0,power,num; 

    printf("Enter The Num To Find The Sum And Power Of That Num : \t");
    scanf("%d",&num);

    for(int i=0;i<=num;i++){
        sum = sum + i; 
    }
    printf("\n The Sum of the no.s till that no.  is %d",sum);

    power = pow(num,3);
    printf("\n The cube_root of that num is %d",power);

    return 0;
}